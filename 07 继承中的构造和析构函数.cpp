//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
using namespace std;

class Base71
{
public:
    Base71()
    {
        cout<<"Base71()"<<endl;
    }
    ~Base71()
    {
        cout<<"~Base71()"<<endl;
    }

};

class Son71:public Base71
{
public:
    Son71()
    {
        cout<<"Son71()"<<endl;
    }

    ~Son71()
    {
        cout<<"~Son71()"<<endl;
    }
};

void test71()
{
    Son71 son1;

}

class Base72
{
public:
    Base72(int a)
    {

    }
};

class Son72:public Base72
{
public:
    Son72(int a):Base72(a)
    {

    }
};


int main7()
{
    test71();
    return 0;
}