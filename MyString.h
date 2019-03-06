//
// Created by Phoenix Fate on 2019-03-06.
//

#ifndef CLION_CPPFOUNDATION_DAY06_MYSTRING_H
#define CLION_CPPFOUNDATION_DAY06_MYSTRING_H
#include <iostream>
#include <string>
using namespace std;

class MyString {
    friend ostream& operator<<(ostream&cout,MyString & str);
    friend istream& operator>>(istream&cin,MyString &str);
public:
    MyString(const char*c);
    MyString(const MyString&obj);
    ~MyString();
    int getSize();
private:
    char*str;
    int size;//不算\0
};


#endif //CLION_CPPFOUNDATION_DAY06_MYSTRING_H
