//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
//Q: this program cant run ..why.
#include <iostream>
using namespace std;
#define P(EX) cout << #EX <<":"<<sizeof(EX)<< ": " << EX << ":"<<&EX<<endl;
#define P_array(a) for (int i=0; i< (sizeof(a)/sizeof(a[0]));i++) cout << "a["<<i<<"]"<<":"<<a[i]<<endl;




int main() {
    const double  nom[5]={1,2,3,4,5} ;
    volatile double vol[5];
    for (int i =0; i< 5; i++) {
        double* nom_pointer = const_cast<double *>(&nom[i]);
         *nom_pointer = (double)2;
        double* vol_pointer = const_cast<double *>(&vol[i]);
        *vol_pointer = (double)2;
    }
    
    P_array(nom);
    
} ///:~
