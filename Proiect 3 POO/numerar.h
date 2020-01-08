#ifndef NUMERAR_H_INCLUDED
#define NUMERAR_H_INCLUDED
#include <iostream>
#include <vector>
//#include "numerar.h"
#include "plata.h"
using namespace std;

class numerar : public plata{
public:
    numerar();
    numerar(float,string);
    ~numerar();
    numerar(const numerar&);
    friend istream &operator>>(istream &,numerar&);
    friend ostream &operator<<(ostream &,numerar&);
    numerar& operator=(const numerar&);
    void afisare();
};


#endif // NUMERAR_H_INCLUDED
