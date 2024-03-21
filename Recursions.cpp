#include<iostream>
using namespace std;

int factorial(int n)       // Used to solve difficult prblms in easier way
{
    if (n<=1){             // Can also be difficult to understand
    return 1;
    }
    return n * factorial(n-1);
} 
int main(){
    int x;
    cout<<"Enter a integer: ";
    cin>>x;

    cout<<"The value of "<<x<<" factorial is: "<<factorial(x)<<endl;

    return 0;
}