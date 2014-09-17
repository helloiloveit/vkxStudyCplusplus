#include <iostream>

using namespace std;

#define P(fp) cout <<"Info of pointer "<<#fp<<":"<<endl<<"*fp:"<<(void*)*fp<<endl<<"&fp:"<<(void*)&fp<<endl;


typedef float (*fpptr)(char);


float get_name_by_first_letter(char a){
    cout<<"people name start with: "<<a<<endl;
    cout<<"....searching" <<endl;
    cout<<"Error: db fail"<<endl;
    return 1.1;
}


fpptr get_school_year(int a){
    fpptr temp = get_name_by_first_letter;
    cout<<"school year = "<<a<<endl;
    return temp;
}


int main(){
    
    
    float (*(*fp)(int))(char);
    fp = get_school_year;
    cout<<" Searching for your class mate"<<endl;
    cout<<"Input school year: ";
    int year;
    cin >> year;
    fpptr first_letter_of_name =  fp(year);
    cout<<"Input first letter of people: ";
    char letter;
    cin>> letter;
    first_letter_of_name(letter);
    
}
