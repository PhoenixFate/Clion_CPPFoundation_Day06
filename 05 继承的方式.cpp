//
// Created by phoenix on 3/5/2019.
//
#include<iostream>
using  namespace std;

class Base1
{
public:
    int a;
protected:
    int b;
private:
    int c;
};

//public extend
class Son1:public Base1
{
public:
    void func()
    {
       cout<<"a:"<<a<<endl; //public
       cout<<"b:"<<b<<endl; //protected

    }
};

class Son2:protected Base1
{
public:
    void func()
    {
        cout<<"a:"<<a<<endl; //protected
        cout<<"b:"<<b<<endl; //protected
    }
};

class Son3:private Base1
{
public:
    void func()
    {
        cout<<"a:"<<a<<endl; //private
        cout<<"b:"<<b<<endl; //private
    }
};

void test501()
{
    Son1 son1;
    son1.a;
    //son1.b;
}


int main5()
{
    return 0;
}

