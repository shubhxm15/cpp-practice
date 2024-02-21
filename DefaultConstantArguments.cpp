#include<iostream>
using namespace std;

int LeapYear(int day , int days = 365)    // Its a default value for int variable
{                                         // If we will not call this fxn then this default value wiil be taken by compiler
    return day + days;
}
// int sumofdays(const int a)    // It will not allow to change its value further in the code
int main(){
    int day = 1;

    // For example
    cout<<"only "<<day<<" day is extra in Leap year and the total days in a Leap year are "<<LeapYear(day)<<endl;
    
    return 0;
}  