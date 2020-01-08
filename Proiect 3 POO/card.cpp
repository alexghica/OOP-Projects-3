#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
#include "cec.h"
#include "card.h"
using namespace std;

card :: card() : plata()
{
    nr_card=0;
    nume=' ';
    prenume=' ';
    sex=' ';
}

card :: card(float f, string s1, int i, string s2, string s3, string s4) : plata(f,s1)
{
    nr_card=i;
    nume=s2;
    prenume=s3;
    sex=s4;
}

card :: ~card()
{
    suma=0;
    data.erase();
    nr_card=0;
    nume.erase();
    prenume.erase();
    sex.erase();
}

card :: card(const card&c) : plata(c.suma,c.data)
{
    nr_card=c.nr_card;
    nume=c.nume;
    prenume=c.prenume;
    sex=c.sex;
}

istream & operator>>(istream &in, card& c)
{
    cout<<"Introduceti suma: "<<endl;
    in>>c.suma;
    cout<<"Introduceti data: "<<endl;
    in>>c.data;
    cout<<"Introduceti numarul cardului: "<<endl;
    in>>c.nr_card;
    cout<<"Introduceti numele: "<<endl;
    in>>c.nume;
    cout<<"Introduceti prenumele: "<<endl;
    in>>c.prenume;
    cout<<"Introduceti sexul(M sau F): "<<endl;
    try
    {
        in >> c.sex;
        if(c.sex.compare("F") != 0 && c.sex.compare("M") != 0)
            throw 0;
    }
    catch(int x)
    {
        cout << "Nu ati introdus F sau M!\n";
        return in;
    }
    return in;
}

ostream & operator<<(ostream &out,card &c)
{
   cout<<"Suma este: "<<endl;
   out<<c.suma<<endl;
   cout<<"Data este: "<<endl;
   out<<c.data<<endl;
   cout<<"Numarul cardului este: "<<endl;
   out<<c.nr_card<<endl;
   cout<<"Numele,prenumele si sexul"<<endl;
   out<<c.nume<<" "<<c.prenume<<" "<<c.sex<<endl;
   return out;
}

card& card:: operator = (const card& c)
{
    if(this==&c)
        return *this;
    suma=c.suma;
    data=c.data;
    nr_card=c.nr_card;
    sex=c.sex;
    nume=c.nume;
    prenume=c.prenume;
    return *this;
}

void card :: afisare()
{
    cout<<*this;
}
