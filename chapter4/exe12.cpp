#include <iostream>
#include "print_info.h"
#include <cassert>
using namespace std;
struct home{
    void func(void);
    void func2(int i);
};

void home::func(void){
};

void home::func2(int i){
    bool check_point;
#ifndef FLAG_PRINT
    check_point = 0;
    cout<<"not define print "<<endl;
#else
    check_point = 1;
    cout<<"deinfe  print"<<endl;
#endif
     assert(check_point);
};

int main(){
    home a;
    a.func();
    a.func2(3);
}

