#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Observer
{
    public:
    virtual void update(float temp) = 0;
    virtual ~Observer(){}
};

class Subject
{
    public:
    virtual void registerSubs(Observer* observer) = 0;
    virtual void notify() = 0;
    virtual ~Subject(){}
};

class ConcreteObserver : public Observer
{
    public:
    void update(float temp) override
    {
        cout << temp << endl;
    }
};

class ConcreteSubject : public Subject
{
    private:
    vector<Observer*> add;
    float temp;

    public:
    void registerSubs(Observer* observer) override{
        add.push_back(observer);
    }
    void notify() override{
        for(Observer* obs : add)
        {
            obs->update(temp);
        }
    }

    void setTemp(float Temp)
    {
        temp = Temp;
        notify();
    }
};

int main()
{
    ConcreteSubject station;
    ConcreteObserver display;
    station.registerSubs(&display);
    station.setTemp(100.00);
    return 0;

}
