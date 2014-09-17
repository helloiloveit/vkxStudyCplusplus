//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
#include <iostream>
using namespace std;
#define P(EX) cout << #EX <<":"<<sizeof(EX)<< ": " << EX << ":"<<&EX<<endl;
#define P_array(A) for (int i=0; i< (sizeof(a)/sizeof(a[0]));i++) cout << "a["<<i<<"]"<<":"<<a[i]<<endl;


void print_array(double* address, int size, int value){
    double* a = static_cast<double *>(address);
    for (int i =0; i< size ; i++)
        cout << "a["<<i<<"]"<<":"<<*(a+i)<<endl;
}
void set_value( unsigned char* address, int size, int value){
    void* a = static_cast<void *>(address);
    double * b = static_cast<double *>(a);
    for (int i =0; i<size ; i++)
        *(b+i) = value;
}

int main() {
    double a[4];
    
    print_array(a, 4, 1);
    unsigned char* pointer = reinterpret_cast<unsigned char *>(&a);
    set_value(pointer, 4, 1);
    print_array(a, 4, 1);
}
