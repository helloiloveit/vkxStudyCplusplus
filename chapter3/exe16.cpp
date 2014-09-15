//: C03:Ifthen.cpp
// Demonstration of if and if-else conditionals
#include <iostream>
using namespace std;
#define P(value) cout<<#value<<"="<<value <<endl;
int main() {

     enum color_dic {
        red =1,
        blue = 2,
        green,
        yellow,
        pink
    } ;

    color_dic hat;
    color_dic* pointer = &hat;
    hat = red;

    cout<<*pointer <<endl;
        cout<<*pointer++ <<endl;
    for (int i =0; i < sizeof(color_dic); i++) {
        
       
        
    }

    
    
    
    
} ///:~ 
