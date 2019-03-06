//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
using namespace std;

class Base6
{
public:
    int a;
protected:
    int b;
private:
    int c;

};

class Son6:public Base6
{
public:
    int d;
};

void test601()
{
    cout<<"sizeof(Son6):"<< sizeof(Son6)<<endl;
}

int main6()
{
    test601();
    return 0;
}
