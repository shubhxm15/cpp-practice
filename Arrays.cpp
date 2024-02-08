#include<iostream>
using namespace std;
int main(){
    int score[10] = {10,23,24,45,56,78,90,98,54,100};   // Taking an array with its size

    cout<<"The value of score is: "<<score[0]<<endl;
    cout<<"The value of score is: "<<score[1]<<endl;
    cout<<"The value of score is: "<<score[5]<<endl;
    cout<<"The value of score is: "<<score[9]<<endl;
    cout<<"The value of score is: "<<score[10]<<endl;
    score[7] = 100;                                     // We can also change the value array before printing it
    cout<<"The value of score is: "<<score[7]<<endl;
    return 0;
}