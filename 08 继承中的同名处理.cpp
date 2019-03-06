//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
using namespace std;

class Base8
{
public:
    Base8()
    {
        a=100;
    }
    void func()
    {
        cout<<"Base8::func()"<<endl;
    }
    int a;
};

class Son8:public Base8
{
public:
    Son8()
    {
        this->a=200;
        Base8::a=300;
    }
    void func()
    {
        cout<<"Son8::func()"<<endl;
    }
    int a;
};

void test801()
{
    Son8 s1;
    cout<<s1.a<<endl;

    //通过子类调用父类
    cout<<"father: "<<s1.Base8::a<<endl;

    s1.func();
    s1.Base8::func();
}

int main8()
{
    test801();
    return 0;
}

