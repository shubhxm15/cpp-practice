#include<iostream>
using namespace std;

void refvarswap(int &a, int &b)            // Call by reference by using Reference Variable
{
    int tempo = a;
    a = b;
    b = tempo;
}
int main(){
    int x, y;

    cout<<"The value of x is: ";
    cin>>x;
    cout<<"The value of y is: ";
    cin>>y;

    cout<<"Value of x before swaping: "<<x<<"\nValue of y before swaping: "<<y<<endl;

    refvarswap(x, y);
    cout<<"\nValue of x after swaping: "<<x<<"\nValue of y after swaping: "<<y<<endl;
    
    return 0;
}