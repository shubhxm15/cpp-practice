#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}
                                      // Using 2 or more functions with same name called function overloading
int sum(int c, int d, int e){
    return c + d + e;
}
int main(){

    cout<<"The sum of two integers is: "<<sum(69, 31)<<endl;
    cout<<"The sum of three integers is: "<<sum(25, 25, 49)<<endl;

    return 0;
}