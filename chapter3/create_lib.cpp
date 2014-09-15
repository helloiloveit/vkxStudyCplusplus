#include "create_lib.h"
#include <iostream>
using namespace std;
void MyFunc() {
    cout <<__func__ <<endl;
}
int MyFunc(int a){
    cout <<__func__<<":"<< "int a:"<<a<<endl;

    return a;
}
float MyFunc(float a){
    cout <<__func__<<":"<<  "float a:"<<a<<endl;
    return a;
}
char MyFunc(char a){
    cout <<__func__<<":"<<  "char a:"<<a<<endl;
    return a;
}
