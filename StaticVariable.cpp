#include<iostream>
using namespace std;

float godsplan()
{
    static float rama = 0;          // This function will run one time 
    rama++;                         // Next time the value of rama will be retained
    return rama;
}
int main(){
    float rama;

    cout<<"Enter value of rama --> ";
    cin>>rama;

    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;
    cout<<"The value of rama is: "<<godsplan()<<endl;

    return 0;
}