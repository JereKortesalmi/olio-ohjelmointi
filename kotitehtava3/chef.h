#ifndef CHEF_H
#define CHEF_H
#include "italianchef.h"

class Chef: public ItalianChef
{
public:
    Chef();
    Chef(string);
    ~Chef();

    string name;
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
