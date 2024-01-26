#include<iostream>
using namespace std;
int main(){
   int age;

   cout<<"Enter your age -> ";
   cin>>age;

   if(age<18 && age>=1) cout<<"You are not eligible for PAN Card";
   if(age<1) cout<<"You are not born yet";
   if(age>=18) cout<<"You can apply for PAN Card";
   
        return 0;
}  
