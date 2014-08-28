#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int countString(string str, char countChar)
{
    int countSpace = 0;
    for (int i =0; i < str.length(); i++)
        if(str[i] == countChar)
            countSpace ++;
    return countSpace;
}


int main() {
    unsigned char countChar;
    cout << " input char want to count "<<endl;
    cin >> countChar;
    ifstream in("exeo2.cpp"); // Open for reading
    ofstream out("temp.cpp"); // Open for writing
    string s;
    int totalCount = 0;
    while(getline(in, s)){ // Discards newline char
        int rst =countString(s, countChar);
        //cout <<"space = "<<rst<<endl;
        totalCount = totalCount + rst;
        
    }
    cout <<"result is = "<<totalCount<<endl;
} ///:~
