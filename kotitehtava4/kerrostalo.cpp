#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"kerrostalo luotu"<<endl;

}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double k)
{
    double laskekulutus3=0;
   laskekulutus3=(eka.laskeKulutus(k)+toka.laskeKulutus(k)+kolmas.laskeKulutus(k));
    cout<<"Kerrostalon kulutus = "<<laskekulutus3<<endl;
    return laskekulutus3;
}
