#include<iostream>
using namespace std;

class Singleton
{
    private:
    Singleton() {
        cout << "Constructor called \n";
    } //Constructor
    ~Singleton() {
        cout << "Destructor called \n";
    } //destructor
    Singleton(const Singleton& obj) = delete; //copy
    Singleton(const Singleton&& obj) = delete; //move
    Singleton& operator = (const Singleton&&) = delete; //assignment

    public:
    int data;

    static Singleton& getInstance()
    {
        static Singleton instance;
        return instance;
    }

    void display()
    {
        cout << "Singleton design pattern is printed here \n";
    }
};

class B
{
    public:
    void show()
    {
        cout << "Hello I'm show \n";
    }
};

int main()
{
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();
    s2.data = 50;
    s1.display();
    B b;
    b.show();
    cout << s1.data << endl;
    return 0;
}
