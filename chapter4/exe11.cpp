#include <iostream>
#include "print_info.h"
using namespace std;
struct home{
    void func(void);
    void func2(int i);
};

void home::func(void){
};

void home::func2(int i){
#ifndef FLAG_PRINT
    cout<<"not define print "<<endl;
#else 
    cout<<"deinfe  print"<<endl;
#endif
};

int main(){
    home a;
    a.func();
    a.func2(3);
}

