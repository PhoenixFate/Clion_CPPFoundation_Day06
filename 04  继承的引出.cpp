//
// Created by phoenix on 3/5/2019.
//
#include <iostream>
using  namespace std;

//抽象一个基类的网页
class BasePage
{
public:
    void header()
    {
        cout<<"header..."<<endl;
    }
    void left()
    {
        cout<<"left..."<<endl;
    }
    void content()
    {
        cout<<"content..."<<endl;
    }
    void footer()
    {
        cout<<"footer..."<<endl;
    }

};

class News:public BasePage
{
public:
    void content()
    {
        cout<<" \b新闻播报"<<endl;
    }
};

class Entertainment:public BasePage
{
public:
    void content()
    {
        cout<<" \b娱乐"<<endl;
    }
};

class Game:public BasePage
{
public:
    void content()
    {
        cout<<" \b游戏"<<endl;
    }
};


void test401()
{
    News news;
    news.content();
    Entertainment entertainment;
    entertainment.content();
    Game game;
    game.content();
}

int main4()
{
    test401();
    return 0;
}

