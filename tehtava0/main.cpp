#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int satluku = rand() % 20+1;
    int arvaus;

    do {
    cout << "arvaa numero 1-20" << endl;
    cin >> arvaus;



    if(satluku < arvaus){
        cout << "pienempi luku" << endl;
        cout << "arvaa uudestaan" << endl;

    }
    else if(satluku > arvaus){
        cout << "isompi luku" << endl;
        cout << "arvaa uudestaan" << endl;

    }
    else{
        cout << "Oikein" << endl;
        cout << satluku << endl;

    }
    }while(arvaus != satluku);


    return 0;
}
