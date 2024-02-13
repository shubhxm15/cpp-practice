#include<iostream>
using namespace std;
int main(){
    enum highway {road, vehicle, speed, distance, place };  // Basically it consist of named values

    cout<<"Here are some realted words to highway "<<endl;  // prints value in integer type

    cout<<road<<endl<<speed<<endl<<distance<<endl;          // It also makes code easier to read and understand

    return 0;
}  