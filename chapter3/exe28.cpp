//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
#include <iostream>
using namespace std;
#define P(EX) cout << #EX<<":"<<sizeof(EX)<< ": "<<endl << &EX << " :---> "<<(void*)EX<<endl;
#define P_array(A) for (int i=0; i< (sizeof(a)/sizeof(a[0]));i++) cout << "a["<<i<<"]"<<":"<<a[i]<<endl;


void printBinary(const unsigned char val) {
    for(int i = 7; i >= 0; i--)
        if(val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
} ///:~

void print_array(double* address, int size, int value){
    cout<<"Array info"<<endl;
    double* a = static_cast<double *>(address);
    for (int i =0; i< size ; i++)
        cout <<(a+i)<<":"<< "a["<<i<<"]"<<":"<<*(a+i)<<endl;
}



//**************** set value function *******************/
void set_value( unsigned char* address, int size, int value){
    void* a = static_cast<void *>(address);
    double * b = static_cast<double *>(a);
    for (int i =0; i<size ; i++)
        *(b+i) = value;
}
void set_value_by_interpret_cast( unsigned char* address, int size, int value){
    void* a = reinterpret_cast<void *>(address);
    double * b = reinterpret_cast<double *>(a);
    for (int i =0; i<size ; i++)
        *(b+i) = value;
}

void set_value_by_byte( unsigned char* ptr){
    cout<<"**************"<<endl;
    cout<<__func__<<endl;
    P(ptr);
    for (int i =0; i<4 ; i++)
        *(ptr+8*i) = 1;
    
    for (int i =0; i<16 ; i++){
        printBinary(*(ptr+i));
    cout<<endl;
    }



    
}

int main() {
    double a[4] = {0,0,0,0};
 



    
    print_array(a, 4, 1);
    cout<<"Start converting..."<<endl;
    P(a);
    unsigned char* ptr_unsigned_char = reinterpret_cast<unsigned char *>(&a);
    char* ptr_char = reinterpret_cast<char *>(&a);
    long* pointer_long = reinterpret_cast< long *>(&a);
    P(ptr_unsigned_char);
    P(ptr_char );
    P(pointer_long);
   // set_value(pointer, 4, 1);
    set_value_by_interpret_cast(ptr_unsigned_char, 4, 1);
    //set_value_by_byte(ptr_unsigned_char );
    print_array(a, 4, 1);
}
