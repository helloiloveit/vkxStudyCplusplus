//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
#include <iostream>
using namespace std;

#define P(A) cout<<"print address map of "<<#A<<endl; for (int i=0; i < 10; i++) cout << #A<<"[" << i << "] = " << &A[i] << endl;
#define P_char(A) cout<<"print address map of "<<#A<<endl; for (int i=0; i < 10; i++) cout << #A<<"[" << i << "] = " << static_cast<void*>(&A[i]) << endl;

int main(){
    int a[10];
    long b[10];
    float c[10];
    char d[10];
    double e[10];
    cout << "sizeof(int)" << sizeof(int )<< endl;;
    P(a );
    P(b);
    P(c);
    P_char(d);
    P(e);

}

