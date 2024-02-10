#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
using namespace std;

#include "kerros.h"
#include "asunto.h"



class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    virtual void maaritaAsunnot() override;
    double laskeKulutus(double);

private:
    Asunto *as1;
    Asunto *as2;
};

#endif // KATUTASO_H
