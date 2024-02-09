#include<iostream>
using namespace std;
int main(){
    int i=0;
    int marks[4] = {10,15,19,17};
    do
    {
        cout<<"The marks of "<<i<<" is: "<<marks[i]<<endl;
        i++;
    } while (i<4);
    
    return 0;
}