#include <iostream>
#include <string>
using  namespace std;
class Person1
{
public:
    Person1(string name,int age):name(name),age(age)
    {

    }
    bool operator==(Person1 &p)
    {
        if(this->name.compare(p.name)==0 && this->age==p.age)
        {
            return true;
        }
        return false;
    }

    bool operator!=(Person1 &p)
    {
        if(this->name==p.name && this->age==p.age)
        {
            return false;
        }
        return true;
    }
    string name;
    int age;
};

void test101()
{
    Person1 p1("阿凡达",10);
    Person1 p2("小强",11);
    bool b=(p1==p2);
    cout<<b<<endl;
    cout<<(p1==p1)<<endl;
    if(p1!=p2)
    {
        cout<<" \bp1，p2不相等"<<endl;
    }
    else
    {
        cout<<" \bp1,p2相等"<<endl;
    }
}

int main1()
{
    test101();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}