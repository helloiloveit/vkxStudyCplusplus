//: C03:Union.cpp
// The size and simple use of a union
//: C06:Nojump.cpp
// Can't jump past constructors
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

struct Stack{
    struct Link{
        void* data;
        Link* next;
        void initialize(void* dat, Link* nxt);
    }*head;
void initialize();
void push(void* data);
void* peek();
void* pop();
void cleanup();
};

void Stack::Link::initialize(void* dat, Link* nxt ){
    data = dat;
    next = nxt;
}
void Stack::initialize(){ head = 0;}

void Stack::push(void* dat){
    Link* newLink = new Link;
    newLink->initialize(dat, head);
    head = newLink;
}
void* Stack::pop(){
    if (head == 0) {
        return 0;
    }
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}
void Stack::cleanup(){
    assert(head==0x0);
}
int main(int argc, char* argv[]){
    Stack textlines;
    ifstream in(argv[1]);
    textlines.initialize();
    string line;
    while (getline(in,line)){
        double* pointer = new double();
	*pointer = atof(&line[0]);
        textlines.push(pointer);
    //    textlines.push(new string(temp));
    }
    void* s;
    while ((s=textlines.pop()) !=0) {
        cout << *(double*)s <<endl;
        delete (double*)s;
    }
    textlines.cleanup();
}

