#include<iostream>
using namespace std;

void callbyvalue(int a, int b)           // Call by value
{
    int tempo = a;
    a = b;
    b = tempo;
}
int main(){
    int x, y;

    cout<<"Enter value of x ";
    cin>>x;
    cout<<"Enter value of y ";
    cin>>y;

    cout<<"Value of x is "<<x<<"\nValue of y is "<<y<<endl;

    callbyvalue(x, y);                  // It does not affect the actual value in main function 
    cout<<"\nThe value of x is "<<x<<"\nThe value of y is "<<y<<endl;
                                        // Hence swaping will not take place
    return 0;
}