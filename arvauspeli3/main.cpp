#include <iostream>
#include <ctime>
using namespace std;

int peli();
int luku;
int main()
{
    peli();
    return 0;
}
int peli() {
    cout << "anna korkein etsittava luku" << endl;
    cin >> luku;
    srand(time(NULL));
    int satluku = rand() % luku+1;
    int arvaus;
    int arvaukset = 1;

    do {
        cout << "arvaa numero 1- " << luku << endl;
        cin >> arvaus;


        if(satluku < arvaus){
            cout << "pienempi luku" << endl;
            cout << "arvaa uudestaan" << endl;
            arvaukset++;
        }
        else if(satluku > arvaus){
            cout << "isompi luku" << endl;
            cout << "arvaa uudestaan" << endl;
            arvaukset++;

        }
        else{
            cout << "Oikein voitit pelin!" << endl;
            cout << satluku << endl;
            cout << "arvaukset: " << arvaukset << endl;

        }
    }while(arvaus != satluku);

}
