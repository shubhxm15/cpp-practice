#include<iostream>
using namespace std;
int main(){
    int i;
    for (int i = 1; i <= 10; i++)
    {
        if (i==3) continue;           // Continue will skip the given number and print rest
        cout<<i<<endl; 
        if(i==5) break;               // Break will stop the loop where condition comes true
    }
    
    return 0;
}    