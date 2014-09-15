//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
using namespace std;
const int sz = 20;

class temp{
public:
    int i;
    void initialize();
private:
    int secret;
protected:
    int middle;
};

void temp::initialize(){
    i = 1;
    secret = 2;
    middle = 3;
    cout << secret << middle << i <<endl;
}
int main(){
   temp foo = temp();
    foo.initialize();
    foo.i = 2;
    //foo.secret = 3;
    //foo.middle = 2;
    
}
