#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();
    ~Asunto();

    void maarita(int, int koko);
    int asukasMaara=2;
    int neliot=100;

    double laskeKulutus(double);

};

#endif // ASUNTO_H
