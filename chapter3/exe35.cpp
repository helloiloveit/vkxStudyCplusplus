#include <iostream> 
using namespace std; 
#define P(A) cout << #A << ": " << (A) << endl; 
int main() { 
#ifdef DEBUG_FLAG
	cout<<"debug mode"<<endl;
#else
	cout<<"Not debug mode"<<endl;
#endif
}
