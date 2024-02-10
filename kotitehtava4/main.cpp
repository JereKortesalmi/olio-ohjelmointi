#include <iostream>
#include "kerrostalo.h"


using namespace std;

int main()
{
    /*Kerrostalo *talo = new Kerrostalo();
    talo->maaritaAsunnot();
    talo->laskeKulutus(1);

*/



    //Kerros olio;
    //olio.maaritaAsunnot();


   Kerrostalo talo;
    double kulutus=0;
    talo.maaritaAsunnot();
    kulutus=talo.laskeKulutus(1);
    cout<<"Kerrostalon kulutus, = "<<kulutus<<endl;

        return 0;
}
