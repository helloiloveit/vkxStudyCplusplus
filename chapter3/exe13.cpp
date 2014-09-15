//: C03:Static.cpp
//: C08:ConstReturnValues.cpp
// Constant return by value
// Result cannot be used as an lvalue



#include <iostream>
using namespace std;


#include <iostream>


void printBinary(const unsigned char val) {
    for(int i = 7; i >= 0; i--)
        if(val & (1 << i))
            std::cout << "1";
        else
            std::cout << "0";
} ///:~
// A macro to save typing:
#define PR(STR, EXPR) cout << STR; printBinary(EXPR); cout << endl;


unsigned char rol(unsigned char val) {
    int highbit;
    if(val & 0x80) // 0x80 is the high bit only
        highbit = 1;
    else
        highbit = 0;
    PR("    val =", val);
    cout<<"    highbit ="<< highbit<<endl;
    // Left shift (bottom bit becomes 0):
    val <<= 1;
    PR("    (val <<=1) =", val);
    // Rotate the high bit onto the bottom:
    val |= highbit;
    PR("    val |=highbit ", val);
    return val;
}
unsigned char ror(unsigned char val) {
    int lowbit;
    if(val & 1) // Check the low bit
        lowbit = 1;
    else
        lowbit = 0;
    PR("    val =", val);
    cout<<"    lowbit="<< lowbit<<endl;

    val >>= 1; // Right shift by one position
    // Rotate the low bit onto the top:
    PR("    val =", val);
    val |= (lowbit << 7);
    PR("    lowbit <<7 =", lowbit<<7);

    PR("    val =", val);

    return val;
} ///:~




int main() {
    unsigned int getval;
    unsigned char a, b;
    cout << "Enter a number between 0 and 255: ";
    cin >> getval; a = getval;
    PR("a in binary: ", a);
    cout << "Enter a number between 0 and 255: ";
    cin >> getval; b = getval;

    PR("b in binary: ", b);
    PR("a | b = ", a bitor b);
    PR("a bitand b = ", a bitand b);
    PR("a xor b = ", a xor b);
    PR("~a = ", ~a);
    PR("~b = ", ~b);
    PR("rol", rol(a ));
    PR("ror", ror(b));
    // An interesting bit pattern:4
    unsigned char c = 0x5A;
    PR("c in binary: ", c);
    a or_eq c;
    PR("a |= c; a = ", a);
    b and_eq c;
    PR("b &= c; b = ", b);
    b xor_eq a;
    PR("b xor_eq a; b = ", b);

} 
