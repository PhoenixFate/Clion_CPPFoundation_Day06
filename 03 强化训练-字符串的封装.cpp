//
// Created by Phoenix Fate on 2019-03-06.
//
#include <iostream>
#include "MyString.h"

using namespace std;

void test301()
{
    MyString str("中文");
    cout<<str<<endl;
    cin>>str;
    cout<<str<<endl;
    cout<<str.getSize()<<endl;
}


int main()
{
    test301();
    return 0;
}