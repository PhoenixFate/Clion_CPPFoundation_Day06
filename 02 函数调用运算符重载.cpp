//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
#include <string>
using namespace std;

//() overload
class MyPrint
{
public:
    MyPrint()
    {

    }
    void operator()(string str)
    {
        cout<<"hello world"<<endl;
        cout<<str<<endl;
    }
};

class MyAdd
{
public:
    MyAdd()
    {

    }
    int operator()(int a,int b)
    {
        return a+b;
    }
};

void test201()
{
    MyPrint myPrint;
    myPrint(" \b我要打印东西");//仿函数
    MyAdd myAdd;
    cout<<myAdd(1,2)<<endl;
    cout<<MyAdd()(2,5)<<endl;//匿名对象
}


int main2()
{
    test201();
    return 0;
}
