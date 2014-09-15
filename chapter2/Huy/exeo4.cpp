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
    string countChar;
   while(true){
    cout << " input char want to count "<<endl;
    cin >> countChar;
    cout<<"char is "<<countChar<<endl;
    if (countChar == "quit") {
	break;
   }
    if (countChar == "hello") {
	cout<<"hello"<<endl;
   }
    if (countChar == "goodbye") {
	cout<<"goodbye"<<endl;
   }
   }

} ///:~
