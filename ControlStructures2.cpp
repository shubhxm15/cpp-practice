#include<iostream>
using namespace std;
int main(){
        int age;                // Selection Structure
        cout<<"Enter your age -> ";
        cin>>age;
    switch (age)               // Switch Statement
    {
    case 18:
        cout<<"You are a big boy now"<<endl;
        break;

        case 15:
        cout<<"You are a growing kid"<<endl;
        break;

        case 35:
        cout<<"You are getting older"<<endl;
        break;
    
    default:
    cout<<"No such special case for this age"<<endl;

        break;
    }
    return 0;
}   