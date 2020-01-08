#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
using namespace std;

plata :: plata()
{
    suma=0;
    data=' ';
}

plata :: plata(float s, string d)
{
    suma=s;
    data=d;
}

plata :: ~plata()
{
    suma=0;
    data.erase();
}

plata :: plata(const plata &p)
{
    suma=p.suma;
    data=p.data;
}

void plata :: setSuma(float f)
{
    suma=f;
}

void plata :: setData(string d)
{
    data=d;
}

float plata :: getSuma()
{
    return suma;
}

string plata :: getData()
{
    return data;
}

plata & plata :: operator =(plata &p)
{
    if(this==&p)
        return *this;
    suma=p.suma;
    data=p.data;
    return *this;
}

istream & operator>>(istream &in,plata &p)
{
    cout<< "Suma platita" << endl;
    in >> p.suma;
    cout << "Data platii: zi-luna-an"<< endl;
    in >> p.data;
    return in;
}

ostream & operator <<(ostream &out, plata &p)
{
    cout<<"Suma platii este:"<<endl;
    out<<p.suma;
    cout<<"Data platii este:"<<endl;
    out<<p.data;
    return out;
}

void plata:: afisare()
{
    cout<<*this;
}
