//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
#include <iostream>
using namespace std;

#define P(A, size_of_a) cout<<"print address map of "<<#A<<endl; for (int i=0; i < size_of_a; i++) cout << #A<<"[" << i << "] = " << &A[i] << endl;



int main(){
    string  a[]={"abcd","v","c","d"};
    int size_of_a = sizeof( a ) / sizeof( a[ 0 ] );
    P(a, size_of_a);

    for (int i=0; i<size_of_a; i++) {
        cout<<"print array: " <<a[i]<<endl;
    }
}
