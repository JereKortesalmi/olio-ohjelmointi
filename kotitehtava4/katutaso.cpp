#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
    as1 = new Asunto();
    as2 = new Asunto();
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
    cout<<"Katutaso tuhotttu"<<endl;

}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
}

double Katutaso::laskeKulutus(double hinta)
{
    double summa=0;
    summa =  as1->laskeKulutus(hinta);
    summa += as2->laskeKulutus(hinta);
    return summa;
}
