//: C03:Ifthen.cpp
// Demonstration of if and if-else conditionals
#include <iostream>
using namespace std;
#define P(value) cout<<#value<<"="<<value <<endl;
int main() {

    typedef struct{
        string a;
        string b;
        int num;
    } struct_A ;
    struct_A home;
    
    home.a = 'a';
    home.b = 'b';
    home.num = 1;
    P(home.a);
    P(home.b);
    P(home.num);
    
    struct_A* str_pointer = &home;
    string foo = "abcde";
    str_pointer->a = foo;
    str_pointer->b = foo;
    str_pointer->num = 2;
    P(str_pointer->a);
    P(str_pointer->b);
    P(str_pointer->num);
    
    
    
} ///:~ 
