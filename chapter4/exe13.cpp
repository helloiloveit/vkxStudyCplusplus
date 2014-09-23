#include <iostream>
#include "print_info.h"
#include <cassert>
using namespace std;
struct video_info{
    string name;
    bool available_sts;
    void print(void);
};

void video_info::print(void){
    cout<<"video tap : "<<this->name <<":vailable:"<<available_sts<<endl;
};



int main(){

}

