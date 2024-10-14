#include <iostream>
using namespace std;
template <typename T>
T add(T num1,T num2){
    return(num1+num2);
}
int main(){
    cout<<add<int>(2,4);
    cout<<add<string>("bhai","hello");
}