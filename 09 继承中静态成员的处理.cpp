//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
using namespace std;

class Base9
{
public:
    static int a;
    static void func()
    {
        cout<<"base func()"<<endl;
    }
};

int Base9::a=20;

class Son9:public Base9
{
public:
    static int a;
    static void func()
    {
        cout<<"Son func()"<<endl;
    }
};

int Son9::a=30;

void test901()
{
    cout<<Son9::a<<endl;
    cout<<Son9::Base9::a<<endl;
    cout<<Base9::a<<endl;

    Son9::func();
    Base9::func();
    Son9::Base9::func();
}

int main9()
{
    test901();
    return 0;
}
