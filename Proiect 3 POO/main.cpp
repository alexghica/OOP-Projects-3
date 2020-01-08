#include <iostream>
#include <vector>
#include "numerar.h"
#include "plata.h"
#include "cec.h"
#include "card.h"
#include "gestiune.h"

using namespace std;
int main()
{
 int n,out=1;
    gestiune <plata> P;
	gestiune <char*> C;
    numerar N;
    card Cd;
    cec K;

    while(out==1)
    {
        cout << "Pentru plata numerar apasati tasta 1.\n";
        cout << "Pentru plata cu cardul de credit apasati tasta 2. \n";
        cout << "Pentru plata in cec apasati tasta 3. \n";
        cout << "Pentru a introduce doar numele dumneavoastra in baza de date apasati tasta 4. \n";
        cout << "Pentru a iesi apasati tasta 5.\n";

        cin >> n;
        switch(n)
        {
            case 1 :{
                     cin >> N;
                     P += N;
                     break;
                    }
            case 2 :{
                     cin >> Cd;
                     P += Cd;
                     break;
                    }
            case 3 :{
                     cin >> K;
                     P += K;
                     break;
                    }
            case 4 :{
                     string s;
                     cin >> s;
                     C += s;
                     break;
                    }
            case 5 :{
                     out=0;
                     break;
                    }

        }
    }

    cout << "\nNumarul total de plati efectuate : ";
	cout << P.getNr_plati() << endl;

	P.afisare_plati();
	C.afisare_clienti();


}



//   int x = -1;
//   int v[4];
//   v[0]=0;v[1]=1;v[2]=2;v[3]=3;
//
//   // Some code
//   cout << "Before try \n";
//   int i=0;
//   while(i<4)
//   {try {
//      cout << "Inside try \n";
//      if (v[i] == 2)
//      {  //v[i]=4;
//         throw v[i];
//         //cout << "After throw (Never executed) \n";
//      }
//      if (v[i] == 3)
//      {  //v[i]=4;
//         throw v[i];
//         //cout << "After throw (Never executed) \n";
//      }
//   }
//   catch (int x ) {
//      cout << "Exception Caught \n";
//   }
//   i++;
//   }
//   for(i=0;i<4;i++)
//    cout<<v[i]<<" ";
//   cout <<endl<< "After catch (Will be executed) \n";
//   return 0;
