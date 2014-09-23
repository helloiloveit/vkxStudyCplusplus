#include <iostream>
using namespace std;

typedef struct single_mem{
    int single_fun();
};

int single_mem::single_fun(){
    cout<<"call "<<__func__<<endl;
    return 1;
};

int main() {
    single_mem sample;
    sample.single_fun();
    

}
