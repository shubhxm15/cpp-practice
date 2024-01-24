#include<iostream>
using namespace std;
int main(){
    int a=10 , b=20;

    cout<<"The value of a+b is: "<<a+b<<endl;     
    cout<<"The value of a-b is: "<<a-b<<endl;      
    cout<<"The value of a/b is: "<<a/b<<endl;      
    cout<<"The value of a*b is: "<<a*b<<endl;      
    cout<<"The value of a%b is: "<<a%b<<endl;       // Arithmetic Operator
    cout<<"The value of a++ is: "<<a++<<endl;      
    cout<<"The value of a-- is: "<<a--<<endl;      
    cout<<"The value of ++a is: "<<++a<<endl;      
    cout<<"The value of --a is: "<<--a<<endl;   

    cout<<"\n";

    // int a=10 , b=20;
    // char c='d';          Assignment Operators
    // float d=10.23
    // etc

    cout<<"The value of a==b is: "<<(a==b)<<endl;  
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;        // Comparison Operators
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;

    cout<<"\n";

    cout<<"The value of AND operator is: "<<((a==b) && (a>=b))<<endl;  
    cout<<"The value of OR operator is: "<<((a!=b) || (a<b))<<endl;       // Logical Operators
    cout<<"The value of NOT operator is: "<<(!(a<=b))<<endl;

        return 0;
}
