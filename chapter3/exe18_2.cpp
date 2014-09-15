//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
using namespace std;
#define P_array_size(value) cout <<"length of int:"<<sizeof(int)<<endl<<"length of array " <<#value<<":" <<sizeof(a_a) <<endl;

#define P(value) cout<<value<<":"<<&value<<endl;
#define P_array_address(array, size) for(int i=0; i<size;i++) cout <<array[i]<<":"<<&array[i] <<endl;
// The union will be the size of a
// double, since that's the largest element

#define ARRAY_SIZE = 3;
int main() {


    int   a_a[3] = {1,2,3};
    char middle_man1 ='b';
    char middle_man2 ='b';
    char middle_man3 ='b';
    char middle_man4 ='b';
    char middle_man5 ='b';
    char middle_man6 ='b';
    char middle_man7 ='b';
    int   b_b[3] = {4,5,6234234};

    

    P_array_size(a_a);
    P_array_size(b_b);
    cout<<"MEMORY MAP"<<endl;
    P_array_address(b_b, 3);
    cout<<middle_man1<<":"<<static_cast<void*>(&middle_man1)<<endl;
    cout<<middle_man2<<":"<<static_cast<void*>(&middle_man2)<<endl;
    cout<<middle_man3<<":"<<static_cast<void*>(&middle_man3)<<endl;
    cout<<middle_man4<<":"<<static_cast<void*>(&middle_man4)<<endl;
    cout<<middle_man5<<":"<<static_cast<void*>(&middle_man5)<<endl;
    cout<<middle_man6<<":"<<static_cast<void*>(&middle_man6)<<endl;
    cout<<middle_man7<<":"<<static_cast<void*>(&middle_man7)<<endl;
    P_array_address(a_a,3);
    cout<< "Off index to see what happen "<<endl;

    P(b_b[4])
    b_b[4] = 10;
    P(b_b[4])




} ///:~
