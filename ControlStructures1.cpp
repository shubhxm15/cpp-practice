#include<iostream>
using namespace std;
int main(){
   int age;                       // Selection Structure

   cout<<"Enter your age -> ";
   cin>>age;                     // if, else and else if Statement

   if(age<18 && age>=1) cout<<"You are not eligible for PAN Card";
   else if (age<1) cout<<"You are not born yet";
   else cout<<"You are eligible and can apply for PAN Card";
   
        return 0;
}      
  