#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int satunnainenluku = rand() % 40;
    cout << satunnainenluku << endl;


    return 0;
}
