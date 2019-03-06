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
    //cin>>str;
    //cout<<str<<endl;
    //cout<<str.getSize()<<endl;

    str="sbc";
    cout<<str<<endl;
    MyString s2("new");
    str=s2;
    cout<<str<<endl;
    cout<<str[0]<<endl;
    MyString s3("888");

    MyString s4=str+"999";
    cout<<s4<<endl;
    MyString s5=str+s3;
    cout<<s5<<endl;
}


int main()
{
    test301();
    return 0;
}