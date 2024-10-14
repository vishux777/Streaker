#include <iostream>
using namespace std;
template <class T>
class calculate{
    private:
    T x,y;

    public:
    calculate(T num1,T num2){
        x=num1;
        y=num2;
    }
    void add(){
        cout<<x+y;
    }
    
};
int main(){
    /*calculate obj1(2,5);
    obj1.add();*/
    /*new way----------------------------*/

    calculate<int> obj1(5,7);
    obj1.add();
    calculate<double> obj2(4.7,8.2);
    obj2.add();
}