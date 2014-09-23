#include <iostream>

using namespace std;
#define P(EX) cout <<"&:"<<&EX<<":" <<#EX <<":"<<sizeof(EX) << "value:"<<EX<<"->:"<<*EX<<endl;
#define P_char(EX) cout <<"&:"<<&EX<<":" <<#EX <<":"<<sizeof(EX) << "value:"<<(void*)EX<<"->:"<<*EX<<endl;

int main(int argc, char* argv[]){
    double* double_ptr ;
    char* char_ptr;
    int* int_ptr;
    
    int num_int = 2;
    char home = 'a';
    double num = 2.3;
    
    double_ptr = &num;
    char_ptr = &home;
    int_ptr = &num_int;
    
    
    P_char(char_ptr);
    P(double_ptr);
    P(int_ptr);
    
}

