#include "chef.h"
#include <iostream>


Chef::Chef()
{
    cout<<"anna kokin nimi: "<<name<<endl;
    cin>>name;
    cout << "Cheff "<<name<<" konstruktori"<<endl;
}

Chef::Chef(string)
{

}

Chef::~Chef()
{
    cout << "Cheff "<<name<<" destruktori"<<endl;
}

void Chef::makeSalad()
{
    cout << "Cheff" <<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout << "Cheff" <<name<<" makes soup"<<endl;
}
