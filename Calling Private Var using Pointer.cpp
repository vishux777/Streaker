#include <iostream>
using namespace std;
class MyClass {
private:
    int privateVar;
public:
    MyClass(int value) : privateVar(value) {}

    void printPrivateVar() const {
        cout << "Private variable value: " << privateVar << endl;
    }
};
int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    MyClass obj(input);
    int* p = (int*)&obj;
    cout <<*p << endl;
    return 0;
}
