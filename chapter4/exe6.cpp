#include <iostream>

using namespace std;

class human{
public:
    int num;
    string name;
    void say_hello();
};

void human::say_hello(){
    cout << "my name is "<<this->name<<endl;
}

int main() {

    human vkx_employee;
    vkx_employee.name = "huy";
    vkx_employee.say_hello();
}
