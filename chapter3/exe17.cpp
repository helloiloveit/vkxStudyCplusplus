//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
using namespace std;
#define P(value, home) cout << #value<<"="<<value<<"(size:"<<sizeof(value)<<")"<<"is stored in union with size:"<<sizeof(home)<<endl;
union Packed { // Declaration similar to a class
    char i;
    short j;
    int k;
    long l;
    float f;
double d;
// The union will be the size of a
// double, since that's the largest element
}; // Semicolon ends a union, like a struct
int main() {
Packed x;
x.i = 'c';
P(x.i, x);
x.d = 3.14159;
P(x.d, x);


} ///:~
