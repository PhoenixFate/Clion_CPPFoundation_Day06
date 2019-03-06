//
// Created by Phoenix Fate on 2019-03-06.
//
#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
};

//虚基类 Sheep
class Sheep:virtual public Animal
{
public:

};

//虚基类 Tuo
class Tuo:virtual public Animal
{
public:

};

class SheepTuo:public Sheep,public Tuo
{
public:

};

class Test
{
public:
    int a;
    double d;
};

//菱形继承的解决方案：利用虚继承：virtual
void test1101()
{
    SheepTuo st;
    st.Sheep::age=10;
    st.Tuo::age=20;
    cout<<st.Sheep::age<<endl;
    cout<<st.Tuo::age<<endl;
    cout<<"sizeof(SheepTuo): "<< sizeof(SheepTuo)<<endl;
    cout<<st.age<<endl;
    cout<<"sizeof(Test): "<<sizeof(Test)<<endl;
}


int main11()
{
    test1101();
    return 0;
}

