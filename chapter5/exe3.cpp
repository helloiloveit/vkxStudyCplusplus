//: C03:Union.cpp
// The size and simple use of a union
#include <iostream>
using namespace std;


class temp{
public:
    int i;
    void initialize(int, int , int);
    friend void display(temp);
    friend void friend_ship(temp);
private:
    int door;
protected:
    int middle;
};

void temp::initialize(int x, int y, int z){
    i = x;
    door = y;
    middle = z;
}
void friend_ship(temp x){
    x.i  = 20;
    x.door = 20;
    
}
void display(temp x){
    cout << x.door << x.middle << x.i<<endl;
}
int main(){
   temp foo = temp();
    foo.initialize(5 ,6 ,7 );
    friend_ship(foo);
    display(foo);
    
}
