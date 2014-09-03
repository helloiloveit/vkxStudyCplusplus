#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    ifstream in("exe06_fillVectorConcatenate.cpp");
    string line;
    string concatenate_str;
    while (getline(in, line)) {
        v.push_back(line);
    // Add line numbers;
    }
    for (int i = 0; i < v.size(); i ++) {
	concatenate_str =concatenate_str +  v[i];
    }
    cout <<concatenate_str<<endl; 
}

