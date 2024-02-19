#include<iostream>
using namespace std;

inline int division(int x, int y)    // Using inline fxn compiler will copy the code of inline fxn in the code of calling fxn
{
    return x/y;
}
int main(){
    int a, b;                        // Basically it improves the performance of code
    cout<<"Enter value of a and b --> ";
    cin>>a>>b;

    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;
    cout<<"The division of x upon y is: "<<division(a, b)<<endl;

    return 0;
}