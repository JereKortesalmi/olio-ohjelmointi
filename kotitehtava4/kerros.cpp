#include "kerros.h"


Kerros::Kerros()
{
    //Kerros::maaritaAsunnot();
     cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
     cout<<"maaritetaan 4 kpl kerroksen asuntoja"<<endl;
     as1.maarita(as1.asukasMaara,as1.neliot);
     as2.maarita(as2.asukasMaara, as2.neliot);
     as3.maarita(as3.asukasMaara,as3.neliot);
     as4.maarita(as4.asukasMaara, as4.neliot);
}

double Kerros::laskeKulutus(double k)
{
    double laskeKulutus2=0;
    laskeKulutus2=(as1.laskeKulutus(k)+as2.laskeKulutus(k)+as3.laskeKulutus(k)+as3.laskeKulutus(k));

   // cout<<"asunnon kulutus, kun hinta on=1 on "<<laskeKulutus2<<endl;
    return laskeKulutus2;
}
