#include <iostream>

#include <vector>
using namespace std;

int main(){
     vector<float> v1, v2, v3;
    for (int i =0; i<25; i++) {
        v1.push_back(i + 0.1);
        v2.push_back(i+1 + 0.1);
    }
    for (int i=0; i<25; i++) {
        v3.push_back(v1[i] + v2[i]);
    }
    for (int i=0; i<25; i++) {
        cout <<i<<":  "<<v1[i]<<"+"<<v2[i]<<"="<< v3[ i ] <<endl;
    }

    
}
