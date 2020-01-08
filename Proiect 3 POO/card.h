#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
using namespace std;

class card : public plata{
    int nr_card;
    string nume;
    string prenume;
    string sex;
public:
    card();
    card(float,string,int,string,string,string);
    ~card();
    card(const card&);
    friend istream& operator>>(istream &,card&);
    friend ostream& operator<<(ostream&,card&);
    card& operator=(const card&);
    void afisare();
};

#endif // CARD_H_INCLUDED
