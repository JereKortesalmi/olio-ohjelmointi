#include <iostream>

#include "asunto.h"
#include "kerrostalo.h"

using namespace std;

int main()
{

    Kerrostalo talo;
    cout<<"Kerrostalon kulutus, = "<<talo.laskeKulutus(1)<<endl;

    return 0;
}
