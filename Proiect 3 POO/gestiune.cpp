#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
#include "cec.h"
#include "card.h"
#include "gestiune.h"
using namespace std;

//template <class T>
//gestiune<T> :: gestiune()
//{
//    nr_plati=0;
//    plati=NULL;
//}
//template <class T>
//gestiune<T> :: ~gestiune()
//{
//    int i;
//    for(i = 0; i < plati.size(); i++)
//        delete plati[i];
//    nr_plati= 0;
//}
//
//template <class T>
//gestiune<T> :: gestiune(const gestiune<T> &g)
//{
//    nr_plati=g.nr_plati;
//    plati=g.plati;
//}
//
//template <class T>
//int gestiune<T> :: getNr_plati()
//{
//    return nr_plati;
//}
//
//template <class T>
//gestiune<T> & gestiune<T> :: operator +=(const T &p)
//{
//    plati.push_back(&p);
//    nr_plati++;
//    return *this;
//}
//
//template <class T>
//void gestiune<T> :: afisare_plati()
//{
//    int i;
//    for(i = 0; i < plati.size(); i++)
//    {
//        {
//            if ( numerar *P=dynamic_cast<numerar*>(plati[i]))
//                P->afisare();
//            else if ( card *P=dynamic_cast<card*>(plati[i]))
//                P->afisare();
//            else if ( cec *P=dynamic_cast<cec*>(plati[i]))
//                P->afisare();
//        }
//    }
//}
