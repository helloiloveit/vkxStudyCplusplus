#include <iostream>

using namespace std;

typedef struct single_mem{
    int number;
};

void    police_man_1(single_mem* pointer, int value){
    pointer->number = value;
};
void    police_man_2(single_mem* pointer){
    cout<<"Display value in "<<__func__<<endl;
    cout<<pointer->number<<endl;
};

int main() {
    single_mem sample;
    police_man_1(&sample, 2);
    police_man_2(&sample);
}
