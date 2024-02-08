#include<iostream>
using namespace std;
int main(){

    int x = 100;
    int* y = &x;        // Here y is used as pointer to store address of x

    cout<<"The address value of y is: "<<&x<<endl;          // & --> address operator
    cout<<"The value at address of y is: "<<*y<<endl;       // * --> dereference operator

    int** z = &y;       // Pointer to pointer ( Stores address of another pointer )
    cout<<"The address value of z is: "<<&y<<endl;
    cout<<"The value at addres of z is: "<<**z<<endl;

    return 0;
}