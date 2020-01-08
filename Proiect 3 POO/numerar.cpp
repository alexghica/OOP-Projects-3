#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
using namespace std;

numerar :: numerar() : plata() {}

numerar :: numerar(float f,string d) : plata(f,d) {}

numerar :: ~numerar()
{
    suma=0;
    data.erase();
}

numerar :: numerar(const numerar &n)
{
    suma=n.suma;
    data=n.data;
}

istream & operator>>(istream &in,numerar &n)
{
    in>>(plata&)n;
    return in;
}

ostream & operator<<(ostream &out,numerar &n)
{
    cout<<"Suma platii este:"<<endl;
    out<<n.suma;
    cout<<"Data platii este:"<<endl;
    out<<n.data;
    return out;
}

numerar& numerar :: operator=(const numerar& n)
{
    if(this==&n)
        return *this;
    suma=n.suma;
    data=n.data;
    return *this;
}

void numerar :: afisare()
{
    cout << "Plata a fost efectuata in numerar.\n";
    cout << "Data la care a fost efectuata plata : " << data << endl;
    cout << "Suma platita : " << suma << endl;
}
