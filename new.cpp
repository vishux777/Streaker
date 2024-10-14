#include <iostream>
using namespace std;
class calculate{
    private:
    int x,y;

    public:
    calculate(int num1,int num2){
        x=num1;
        y=num2;
    }
    void add(){
        cout<<x+y;
    }
    
};
int main(){
    calculate obj1(2,5);
    obj1.add();
}