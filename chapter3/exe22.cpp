#include <iostream>
using namespace std;
#define P(a) cout<<"The entered value is::"<<a<<endl<<"The bytes occupied is::"<<sizeof(a)<<endl;
int main ()
{
    int a;
    char arr [20] = "asdfd";
    cout <<  "Enter a string with a integer: " <<endl;
    cin >> arr ;
    a = atoi ( arr );
    P(a );
    cout <<  "Enter a string with a long integer: " ;
    cin >> arr ;
    long a_l = atol( arr );
    P(a_l);
    cout <<  "Enter a string with a double integer: " <<endl;
    cin >>  arr ;
    double a_d = atoi ( arr );
    P(a_d);
    return 0;
}
