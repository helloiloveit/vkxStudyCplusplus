//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
using namespace std;
#define P_array_size(value) cout <<"length of int:"<<sizeof(int)<<endl<<"length of array " <<#value<<":" <<sizeof(a_a) <<endl;

#define P(value) cout <<endl<<"pointer->"<<value<<endl<<"*pointer:"<<*value<<endl;
#define P_array_address(array, size) for(int i=0; i<size;i++) cout <<array[i]<<":"<<&array[i] <<endl;
// The union will be the size of a
// double, since that's the largest element

#define ARRAY_SIZE = 3;
int main() {


    int   a_a[3] = {1,2,3};
    int   b_b[3] = {4,5,6};
    int* pointer = &b_b[2];
    

    P_array_size(a_a);
    P_array_size(b_b);
    cout<<"MEMORY MAP"<<endl;
	b_b[3] = 99;
    P_array_address(b_b, 3);
    P_array_address(a_a,3);
    cout<< "Pointer point at the end of one array"<<endl;
    P(pointer);
    pointer++;
    P(pointer);
    cout<<"Set value by pointer"<<endl;
    *pointer = 10;
    P(pointer);




} ///:~

