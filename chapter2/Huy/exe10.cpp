#include <iostream>

#include <vector>
using namespace std;

int main(){
    vector<float> v1;
    for (int i =0; i<25; i++) {
        v1.push_back(i + 0.1);
    }
    for (int i=0; i<25; i++) {
        cout <<i<<":"<< v1[ i ] <<endl;
    }
    cout <<"square "<<endl;
    for (int i=0; i<25; i++) {
        cout <<"square temp"<<v1[i]*v1[i]<<endl;
        v1[i] = v1[i] * v1[i];

    }
    for (int i=0; i<25; i++) {
        cout <<i<<":"<< v1[ i ] <<endl;
    }

    
}
