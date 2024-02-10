#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;

}

Asunto::~Asunto()
{

}
void Asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;
    cout<<"Asunto maaritetty asukkaita= "<<asukasMaara<<" nelioita= "<<neliot<<endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double summa=asukasMaara*neliot*hinta;
    return summa;
}
