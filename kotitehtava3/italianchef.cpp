#include "italianchef.h"

ItalianChef::ItalianChef()
{
    cout << "Anna Italian kokin nimi: "<<getname<<endl;
    cin >>getname;
    cout << "Chef "<<getname<<" kontruktori"<<endl;
}




ItalianChef::~ItalianChef()
{
    cout << "Chef "<<getname<<" destruktori"<<endl;
}

ItalianChef::ItalianChef(string, int, int)
{
    cout << "Chef "<<getname<<" kontruktori"<<endl;
}

void ItalianChef::makePasta(int,int)
{

    cout << "makes pasta with special recipe"<<endl;
    cout << "Chef "<<getname<<" users jauhot = " <<jauhot<<endl;
    cout << "Chef "<<getname<<" users vesi = " <<vesi<<endl;
}

