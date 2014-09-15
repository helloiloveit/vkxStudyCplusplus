#include <iostream>

using namespace std;


int a = 1;
float b = 2.1;
char c = 'c';
string d = "da";

#define P(A) cout << #A <<":"<< A<<": " <<"address:"<< (long)&A <<endl;
int main() {
    P(a);
    P(b );
    P(c );
    P(d );

} ///:
