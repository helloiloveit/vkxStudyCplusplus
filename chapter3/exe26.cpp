//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
#include <iostream>
using namespace std;
#define P(EX) cout << #EX <<":"<<sizeof(EX)<< ": " << EX << ":"<<&EX<<endl;
#define P_array(A) for (int i=0; i< (sizeof(a)/sizeof(a[0]));i++) cout << "a["<<i<<"]"<<":"<<a[i]<<endl;


void set_value(void* address, int number, int value){
    int* a = static_cast<int *>(address);
    for (int i =0; i<number; i++)
        *(a+i) = value;
}

int main() {
    int a[4];
    void* address = static_cast<void *>(&a);
    P(a);
    P_array(a);
    set_value(address, 3, 1);
    P_array(a);
} ///:~
