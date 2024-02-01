#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;


}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(as1.asukasMaara,as1.neliot);
    as2.maarita(as2.asukasMaara, as2.neliot);



}

double Katutaso::laskeKulutus(double k)
{
    double laskeKulutus1=0;
    laskeKulutus1=(as1.laskeKulutus(k)+as2.laskeKulutus(k));
    //cout<<"asunnon kulutus, kun hinta on=1 on "<<laskeKulutus1<<endl;
    return laskeKulutus1;
}


