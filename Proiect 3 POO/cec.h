#ifndef CEC_H_INCLUDED
#define CEC_H_INCLUDED
#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
using namespace std;

class cec : public plata{
    string nume;
    string prenume;
    string sex;
public:
    cec();
    cec(float,string,string,string,string);
    ~cec();
    cec(const cec&);
    friend istream& operator>>(istream &,cec&);
    friend ostream& operator<<(ostream &,cec&);
    cec& operator=(const cec&);
    void afisare();
};


#endif // CEC_H_INCLUDED
