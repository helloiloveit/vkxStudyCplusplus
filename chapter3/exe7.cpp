// use pointer
#include <iostream>

using namespace std;
#define P(A) cout << #A <<":"<< *A<<": " <<"address:"<< (long)&A <<endl;
#define P_address(A) cout << #A <<":"<< A<<": " <<"address:"<< &A <<endl;
void func1(int* a){
    P(a);
    ++*a;
    P(a);
}

void func2(string* b){
    P(b);
    *b = *b + "d";
    P(b );
}

void func3(string& r){
    P_address(r);
    r = r + "f";
    P_address(r);

}

int main() {
    int a = 1;
    func1(&a);
    string b = "abc";
    func2(&b);
    func3(b);
} ///:
