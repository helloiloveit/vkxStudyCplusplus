#include <iostream>
using namespace std;
#define P(EX) cout << #EX <<":"<<sizeof(EX)<< ": " << EX << ":"<<&EX<<endl;

void printBinary(const unsigned char val) {
    for(int i = 7; i >= 0; i--)
        if(val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
} ///:~

void printBinary_by_size(const unsigned char val, int start, int end) {
    for(int i = start; i >= end ; i--)
        if(val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
} ///:~

void check_endian() {
    int num = 1;
    cout<<"******************"<<endl;
    if(*(char *)&num == 1)
        cout<<"\nSystem: Little-Endian\n"<<endl;
    else
        cout<<"Big-Endian"<<endl;
    cout<<"******************"<<endl;
}


void sign_value(const unsigned char val){
    if (val&0x80) {
        cout<<"sign bit is 1"<<endl;
    }
    else{
       cout<<"sign bit is 0"<<endl;
    }
}

void exponent_value(const unsigned char first_byte, const unsigned char second_byte){
    cout<<"exponent value (8 bit) : ";
    printBinary_by_size(first_byte, 6, 0);
    printBinary_by_size(second_byte, 7, 7);
    cout<<endl;
}
void fraction_value(const unsigned char second_byte, const unsigned char third_byte, const unsigned char last_byte){
    cout<<"fraction_value (23 bit) : ";
    printBinary_by_size(second_byte, 6, 0);
    printBinary_by_size(third_byte, 7, 0);
    printBinary_by_size(last_byte, 7, 0);
    cout<<endl;
}

int main() {
    check_endian();
    float number = 1.1;
    P(number);
    
    unsigned char* bytes = (unsigned char*)&number;
    
    for (int i = 0; i<4; i++) {
        cout<<(void*)&bytes[i]<<":";
        printBinary(bytes[i]);
        cout<<" "<<endl;
    }
    cout <<"\nDisplay floating point presentation"<<endl;
    sign_value(bytes[3]);
    exponent_value(bytes[3], bytes[2]);
    fraction_value(bytes[2], bytes[1], bytes[0]);
    
} 
