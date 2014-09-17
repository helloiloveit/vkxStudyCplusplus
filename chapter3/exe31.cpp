#include <iostream>
using namespace std;
void P(int A) {
#ifdef DEBUG_FLAG
    cout << "value is : " << A <<  endl;
#else
    cout<<"no debug info"<<endl;
#endif  
}
int main() {
    int a = 1, b = 2, c = 3;
    P(a); P(b); P(c);
    P(a + b);
    P((c - a)/b);
} ///:~
