#include<iostream>
using namespace std;
int main(){
    const float a = 12.12;
    cout<<"The value of a is: "<<a<<endl;
    // a = 123;                               // Const will not allow to update the value of that and will give ERROR
    // cout<<"The value of a is: "<<a<<endl;
   
// Operator precedence
int x=12, y=12;
int z = x*10+y;                    // * is 1st prefered in c++ than +
cout<<"The value of c: "<<z<<endl;

return 0;
}  