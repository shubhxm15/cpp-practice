#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=1, b=12, c=123, d=1234;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of d is: "<<d<<endl;

    // Using Manipulator - setw
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    cout<<"The value of d is: "<<setw(4)<<d<<endl;

        return 0;
}  
