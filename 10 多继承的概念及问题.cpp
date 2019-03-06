//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
using namespace std;

class Base101
{
public:
    void fun()
    {
        cout<<"Base101 fun()"<<endl;
    }
    void fun(int a)
    {
        cout<<"Base101 fun(int)"<<endl;
    }
    void fun2()
    {
        cout<<"Base101 fun2()"<<endl;
    }
    int a;
};

class Base102
{
public:
    void fun()
    {
        cout<<"Base102 fun()"<<endl;
    }

    int a;
};

class Son10:public Base101,public Base102
{

};

void test1001()
{
    Son10 son;
    son.fun2();
}

int main()
{
    return 0;
}

