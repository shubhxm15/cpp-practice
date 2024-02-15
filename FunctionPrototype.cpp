#include<iostream>
using namespace std;

void g()                             // Whenever we call the function it will print Hello Bachoo..!!
{
     cout<<"Hello Bachoo..!!\n";
}
    
int subj(int x, int y);             // It gives assurity that the function will come in the code 
                                    // Known as function prototype
int main(){

    int num1, num2;

    cout<<"Enter your number: ";
    cin>>num1;
    cout<<"Enter your 2nd number: ";
    cin>>num2;

    g();
    cout<<"The subtraction is: "<<subj(num1, num2)<<endl;

    return 0;
}

int subj(int x, int y)
{
    int c = x - y;
    return c;
}