#include "Kerros.h"
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Asunto a;
    Katutaso k;
    Kerros ki;
    Kerrostalo ke;

    k.maaritaAsunnot();
    ki.maaritaAsunnot();
    ki.maaritaAsunnot();

   ke.laskeKulutus(1);


    return 0;
}
