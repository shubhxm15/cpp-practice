#include<iostream>
using namespace std;

int c = 69;

int main(){
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";  
    cin>>b;

    c = a+b;
    cout<<"The local value of c is: "<<c<<endl;
    cout<<"The global value of c is: "<<::c<<endl;       // Scope Resolution Operator ( :: )
                                                         //It will print global value of c
        return 0;
} 