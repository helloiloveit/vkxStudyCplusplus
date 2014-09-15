#include <iostream>
#include "create_lib.h"
using namespace std;

int main()
{
    int number;
    bool flag = true;
    cout<<"Enter a number to check ";
    cin>>number;
    for(int i=2;i<number; i++)
    {
        if(number%i==0)
        {
            flag = false;
        }
    }
    if (flag) {
        cout <<"it is a prime"<<endl;
    } else {
        cout <<"Not a prime"<<endl;
    }

    
}
