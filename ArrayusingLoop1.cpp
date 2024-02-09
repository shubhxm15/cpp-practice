#include<iostream>
using namespace std;
int main(){
    int score[5] = {10,12,14,16,18};       // Printing array using loop

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of "<<i<<" score is: "<<score[i]<<endl;
    }
    
    return 0;
}