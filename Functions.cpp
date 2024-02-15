#include<iostream>
using namespace std;

float addition(float x, float y){     // This function will perform the task by taking values from main function below
    return x + y;                     // Also these are formal parameters wich take values from actual parameters
}

int main(){
    float digit1, digit2;

    cout<<"Enter 1st digit: ";
    cin>>digit1;
                                        // These are actual parameters which are taken as input
    cout<<"Enter 2nd digit: ";
    cin>>digit2;

    cout<<"The sum is: "<<addition(digit1, digit2)<<endl;

    return 0;
}