#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;


}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukas, int koko)
{

    int asukasMaara=asukas;
    int neliot=koko;
    cout<<"Asunto maaritetty asukkaita="<<asukasMaara<<" ja nelioita="<<neliot<<endl;

}

double Asunto::laskeKulutus(double k)
{

    double kulutus=k*asukasMaara*neliot;
    //cout<<"asunnon kulutus, kun hinta on=1 on "<<kulutus<<endl;
    return kulutus;



}




