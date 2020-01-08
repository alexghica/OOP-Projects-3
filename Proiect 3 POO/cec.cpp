#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
#include "cec.h"
using namespace std;

cec :: cec() : plata()
{
    nume=' ';
    prenume=' ';
    sex=' ';
}

cec :: cec(float f,string s1,string s2,string s3,string s4) : plata(f,s1)
{
    nume=s2;
    prenume=s3;
    sex=s4;
}

cec :: ~cec()
{
    suma=0;
    data.erase();
    nume.erase();
    prenume.erase();
    sex.erase();
}

cec :: cec(const cec& c) : plata(c.suma,c.data)
{
    nume=c.nume;
    prenume=c.prenume;
    sex=c.sex;
}

istream & operator>>(istream &in,cec& c)
{
    cout<<"Introduceti suma: "<<endl;
    in>>c.suma;
    cout<<"Introduceti data: "<<endl;
    in>>c.data;
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

ostream & operator<<(ostream &out, cec&c)
{
   cout<<"Suma este: "<<endl;
   out<<c.suma;
   cout<<"Data este: "<<endl;
   out<<c.data;
   cout<<"Numele,prenumele si sexul"<<endl;
   out<<c.nume<<" "<<c.prenume<<" "<<c.sex<<endl;
   return out;
}

cec& cec :: operator=(const cec& c)
{
    if(this==&c)
        return *this;
    suma=c.suma;
    data=c.data;
    sex=c.sex;
    nume=c.nume;
    prenume=c.prenume;
    return *this;
}

void cec :: afisare()
{
    cout<<*this;
}
