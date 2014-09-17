#include <iostream>
#include <iomanip>
using namespace std;

#define P(A) cout<<"print address map of "<<#A <<":s:"<<sizeof(A)<<":" << setw(20)<<right<< &A << endl;
#define P_char(A) cout<<"print address map of "<<#A<<":s:"<<sizeof(A)<<":"<< setw(20)<<right<<static_cast<void*>(&A) << endl;

typedef struct {
    int number;
    double  number4;
    char letter;
    float number2;
    double  number3;
}home;

int main(){
    int next_var;
    home hanoi;
    P(hanoi);
    P(hanoi.number);
    P(hanoi.number4);
    P_char(hanoi.letter);
        P(hanoi.number2);
        P(hanoi.number3);
    P(next_var);

    

}
