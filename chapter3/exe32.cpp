#include <iostream>

using namespace std;

#define P(fp) cout <<"Info of pointer "<<#fp<<":"<<endl<<"*fp:"<<(void*)*fp<<endl<<"&fp:"<<(void*)&fp<<endl;


int book (double a){
    cout<<"here is double:"<<a<<endl;
    return a;
};
int book2 (double a){
    cout<<"here is double:"<<a<<endl;
    return a;
};


int main(){
    
    int(*fp)(double) = &book;
    fp = book;
    cout<<"Function add:"<<(void*)&book<<endl;
    P(fp);
    fp(3);
    fp(2);
}
