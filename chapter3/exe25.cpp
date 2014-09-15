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


int main() {
    int number = -3;
    P(number);

    unsigned char* bytes = (unsigned char*)&number;

    for (int i = 0; i<4; i++) {
        printBinary(bytes[i]);
        cout<<" "<<endl;
    }
    

    
} ///:~
