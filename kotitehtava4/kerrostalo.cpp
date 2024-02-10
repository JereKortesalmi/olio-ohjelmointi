#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan kerrostalon kaikki asunnot"<<endl;

}

Kerrostalo::~Kerrostalo()
{

    cout<<"Kerrostalo tuhottu"<<endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double summa=0;
    summa  = eka->laskeKulutus(hinta);
    summa += toka->laskeKulutus(hinta);
    summa += kolmas->laskeKulutus(hinta);
    return summa;
}
