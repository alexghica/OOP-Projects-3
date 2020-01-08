#ifndef PLATA_H_INCLUDED
#define PLATA_H_INCLUDED

#include <iostream>
#include <vector>
#include "numerar.h"
//#include "plata.h"
using namespace std;


class plata{
protected:
    float suma;
    string data;
public:
    plata();
    plata(float,string);
    ~plata();
    plata(const plata&);
    void setSuma(float);
    void setData(string);
    string getData();
    float getSuma();
    plata & operator =(plata &);
    friend istream & operator>>(istream &, plata&);
    friend ostream & operator<<(ostream &,plata&);
    virtual void afisare();


};

#endif // PLATA_H_INCLUDED
