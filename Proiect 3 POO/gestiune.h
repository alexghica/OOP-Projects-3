#ifndef GESTIUNE_H_INCLUDED
#define GESTIUNE_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;

template <class T>
class gestiune
{
protected:
    static int nr_plati;
    vector <T*> plati;
public:
    gestiune(){}
    ~gestiune()
    {
        int i;
        for(i = 0; i < plati.size(); i++)
            delete plati[i];
        nr_plati= 0;
    }
    gestiune(const gestiune<T> &g)
    {
        plati=g.plati;
    }
    gestiune<T> & operator +=(T &p)
    {
        plati.push_back(&p);
        nr_plati++;
        return *this;
    }
    static int getNr_plati ()
    {
        return nr_plati;
    }
    void afisare_plati()
    {
        int i;
        for(i = 0; i < plati.size(); i++)
        {
            {
                if ( numerar *P=dynamic_cast<numerar*>(plati[i]))
                    P->afisare();
                else if ( card *P=dynamic_cast<card*>(plati[i]))
                    P->afisare();
                else if ( cec *P=dynamic_cast<cec*>(plati[i]))
                    P->afisare();
            }
        }
    }
};

template <class T>
int gestiune<T>::nr_plati=0;

template <>
class gestiune<char*>   // asa am gasit pe net. n am stiut cum sa l scriu ca pe restul, cu clasa in header si corpul functiilor in cpp
{
    int nr_clienti;
    vector <string> nume_clienti;
public:
    gestiune()
    {
        nr_clienti=0;
    }
    ~gestiune() {}
    gestiune(gestiune<char*> &p)
    {
        nume_clienti=p.nume_clienti;
        nr_clienti=p.nr_clienti;
    }
    gestiune <char*>& operator +=(string s)
    {
        nume_clienti.push_back(s);
        nr_clienti++;
        return *this;
    }
    void afisare_clienti()
    {
        int i;
        if(nume_clienti.size()==0)
            cout<<"Nu exista nici un client."<<endl;
        else
        {
            cout<<"Numarul de clienti este: "<<nr_clienti<<endl;
            for(i=0; i<nume_clienti.size(); i++)
                cout<<nume_clienti[i]<<endl;
        }
    }
};



#endif // GESTIUNE_H_INCLUDED
