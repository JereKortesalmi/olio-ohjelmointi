#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>

using namespace std;

class ItalianChef
{
public:
    ItalianChef();

    ~ItalianChef();
ItalianChef(string,int,int);
    string getname;
    void makePasta(int,int);

private:
    int vesi =100;
    int jauhot=250;
};

#endif // ITALIANCHEF_H
