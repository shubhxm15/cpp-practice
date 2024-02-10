#include<iostream>
using namespace std;
int main(){
    int marks[] = {10,236,376,969};        // Pointer Arithmetic stores memory address not the value 
    int* p = marks;                        // Further we can perform operations on it
    cout<<"The marks of *p is: "<<(*p)<<endl;
    cout<<"The marks of p++ is: "<<*(++p)<<endl;
    cout<<"The marks of ++p is: "<<*(++p)<<endl;
    cout<<"The marks of --p is: "<<*(--p)<<endl;

    return 0;
}