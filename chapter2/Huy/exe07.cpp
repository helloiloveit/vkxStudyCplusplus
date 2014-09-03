#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    ifstream in("exe07.cpp");
    string line;
    while (getline(in, line)) {
        v.push_back(line);
    // Add line numbers;
    }
    for (int i = 0; i < v.size(); i ++) {
	cout << " Display by line. Press Enter to process " <<endl;
	if (cin.get() == '\n')
        	cout <<  v[i] << endl;
    }
    cout <<"lalalal"<<endl; 
}

