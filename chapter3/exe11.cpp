//: C03:Static.cpp
// Using a static variable in a function
#include <iostream>
using namespace std;
int main() {
    double i, j;
    cout << "Enter a double: ";
    cin >> i;
    cout << "Enter another double: ";
    cin >> j;
    cout << "i > j is " << (i > j) << endl;
    cout << "i < j is " << (i < j) << endl;
    cout << "i >= j is " << (i >= j) << endl;
    cout << "i <= j is " << (i <= j) << endl;
    cout << "i == j is " << (i == j) << endl;
    cout << "i != j is " << (i != j) << endl;
    cout << "i && j is " << (i && j) << endl;
    cout << "i || j is " << (i || j) << endl;
    cout << " (i < 10) && (j < 10) is "
    << ((i < 10) && (j < 10)) << endl;
} ///:~
