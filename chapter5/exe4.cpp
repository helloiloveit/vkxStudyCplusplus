//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
#include <string>
using namespace std;
class A  {
private:
    int birthdate;
public:
    string memo;
    string name;
    void initialize(string);
    void  write_memo(A*);
    void print_memo();
    
};

void A::initialize(string birth_name){
    name = birth_name;
}
void A::print_memo(){
    cout << memo <<endl;
}

void A::write_memo(A* a){
    a->memo = a->name + " has write down a word";
}


int main(){
    A person1 = A();
    A person2 = A();
    person1.initialize("A");
    person2.initialize("B");
    person2.write_memo(&person1);
    person1.print_memo();
    person1.write_memo(&person2);
    person2.print_memo();
