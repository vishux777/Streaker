#include <iostream>
using namespace std;
class Base{
    public:
    void print(){
        cout<<"From Base";
    }
};
class Derived : public Base{
    public:
    void print(){
        cout<<"From Derived";
    }
};
int main(){
    Derived d1;
    d1.print();
}