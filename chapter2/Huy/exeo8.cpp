#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<float> v;
    float number;
    for (int i =0; i<25; i++) {
        cout <<"input floating number : "<<endl;
        cin >> number;
        v.push_back(number);
    }
    for (int i=0; i<25; i++) {
        cout <<i<<":"<< v[ i ] <<endl;
    }

    
}
