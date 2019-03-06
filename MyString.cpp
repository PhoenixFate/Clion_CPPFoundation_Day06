//
// Created by Phoenix Fate on 2019-03-06.
//

#include "MyString.h"

ostream& operator<<(ostream& cout,MyString &str)
{
    cout<<str.str;
    return cout;
}
istream& operator>>(istream &cin,MyString &str)
{
    char buffer[1024];
    cin>>buffer;
    if(str.str!=NULL)
    {
        delete[] str.str;
    }
    str.str=new char[strlen(buffer)+1];
    strcpy(str.str,buffer);
    str.size=strlen(buffer);
    return cin;
}

MyString::MyString(const char *c) {
    this->str=new char[strlen(c)+1];
    strcpy(this->str,c);
    this->size=strlen(c);
}

MyString::MyString(const MyString &obj) {
    if(this->str!=NULL)
    {
        delete[] str;
        this->str=NULL;
        this->size=0;
    }
    this->str=new char[strlen(obj.str)+1];
    this->size=strlen((obj.str));
}

MyString::~MyString() {
    if(this->str!=NULL)
    {
        delete[]str;
        this->str=NULL;
        this->size=0;
    }
}

int MyString::getSize() {
    return this->size;
}

MyString &MyString::operator=(MyString &str) {
    if(this->str!=NULL)
    {
        delete[] this->str;
        this->str=NULL;
        this->size=0;
    }
    this->str=new char[strlen(str.str)+1];
    strcpy(this->str,str.str);
    this->size=strlen((str.str));
    return *this;
}

MyString &MyString::operator=(const char *str) {
    if (this->str != NULL) {
        delete[] this->str;
        this->str = NULL;
        this->size = 0;
    }
    this->str = new char[strlen(str) + 1];
    strcpy(this->str,str);
    this->size = strlen((str));
    return *this;
}

char &MyString::operator[](int index) {
    return this->str[index];
}

MyString MyString::operator+(MyString &str) {
    int newSize=str.size+this->size;
    char *s=new char[newSize]{0};
    strcat(s,this->str);
    strcat(s,str.str);
    return MyString(s);
}

MyString MyString::operator+(const char *str) {
    int newSize=strlen(str)+this->size;
    char *s=new char[newSize]{0};
    strcat(s,this->str);
    strcat(s,str);
    return MyString(s);
}
