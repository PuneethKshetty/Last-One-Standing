#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "config/SK_Blade_Main_01-ESP_21.hpp"
#include "TIF_Start.hpp"
#include "TIF_CanNotifier.hpp"
#include "config/SK_VM_Sub3-BleUwbTrx_02.hpp"
using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;
using ::testing::Invoke;
using ::testing::InvokeWithoutArgs;
using ::testing::DoDefault;
using ::testing::DoAll;

class ClampOnorOffTest : public ::testing::Test {
    public:
	tif::TIF_Start tifStart;
	//called before every test case
	void SetUp() override {}
	//called after every test case
	void TearDown() override {}
};

class DummyTest
{
	public:
	virtual bool login(int id, int password) { 
		std::cout << "Original action" << std::endl;
		return true; }
	virtual bool logout() {return true;}
};

class MockTest : public DummyTest
{
	public:
	MOCK_METHOD0(logout, bool());
	MOCK_METHOD2(login, bool (int id, int password));
};

class DB
{
	DummyTest &db;
	public:
	DB(DummyTest &d) : db(d) {}

	int init(int id, int password)
	{
		if(db.login(id, password) != true)
		{
			std::cout << "Failure" << std::endl;
			return -1;
		}
		else
		{
			std::cout << "Passed" << std::endl;
			return 1;
		}
	}
};


bool dummy()
{
	std::cout << "Global called " << std::endl;
	return true;
}

struct testAbc
{
	void dummy1()
	{
		std::cout << "Default actions called " << std::endl;
		return;
	}
};


TEST(MyDBtest, test)
{
	// MockTest dbtest;
	// DB d(dbtest);
	// ON_CALL(dbtest, login(_,_)).WillByDefault(Return(true));
	// //EXPECT_CALL(dbtest, login(_,_)).Times(AtLeast(1)).WillRepeatedly(Return(true));
	// int retVal = d.init(1,20);
	// ASSERT_EQ(retVal , 1);

	//Mocking without deriving from a class
	// Here we can no derived class from Mock DB : public DummyTest[this line not required] and place class DummyTest in place of MockTest[ no need of virtual]
	//Here also instead of MockTest dbtest; we can use DummyTest d and use as refernce in Db(&d)

	//Invoke original implementation.
	//This can be done using invoke
	// MockTest dbtest;
	// DB d(dbtest);
	// DummyTest d1;
	// //ON_CALL(dbtest, login(_,_)).WillByDefault(Return(true));
	// EXPECT_CALL(dbtest, login(_,_)).Times(AtLeast(1)).WillOnce(Invoke(&d1, &DummyTest::login));

	// //Create soem stubs, call some stubs to support mock then we call invoke
	// int retVal = d.init(1,20);
	// ASSERT_EQ(retVal , 1);

	// MockTest dbtest;
	// DB d(dbtest);
	// DummyTest d1;
	// //ON_CALL(dbtest, login(_,_)).WillByDefault(Return(true));

	// /* Invoke without args is for global function */
	// EXPECT_CALL(dbtest, login(_,_)).Times(AtLeast(1)).WillOnce(InvokeWithoutArgs(&dummy));

	// int retVal = d.init(1,20);
	// ASSERT_EQ(retVal , 1);


	//Setting default actions
	// MockTest dbtest;
	// DB d(dbtest);
	// DummyTest d1;
	// testAbc abc;
	// ON_CALL(dbtest, login(_,_)).WillByDefault(Invoke(&abc, &testAbc::dummy1));

	// /* Invoke without args is for global function */
	// EXPECT_CALL(dbtest, login(_,_)).Times(AtLeast(1)).WillOnce(DoDefault());

	// int retVal = d.init(1,20);
	// ASSERT_EQ(retVal , 1);


	//Perfrom multiple actions
	MockTest dbtest;
	DB d(dbtest);
	DummyTest d1;
	testAbc abc;

	/* Invoke without args is for global function */
	//Do All() can make sure we can call all invokes
	
	EXPECT_CALL(dbtest, login(_,_)).Times(AtLeast(1)).WillOnce(DoAll(Invoke(&abc, &testAbc::dummy1),Invoke(&abc, &testAbc::dummy1), Return(true)));

	int retVal = d.init(1,20);
	ASSERT_EQ(retVal , 1);

}

// int main(int argc, char** argv)
// {
// 	testing::InitGoogleTest(&argc, argv);
// 	return RUN_ALL_TESTS{};
// }
