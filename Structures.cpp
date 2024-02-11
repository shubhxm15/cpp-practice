#include<iostream>
using namespace std;
 typedef struct employee      // Using typedef we need not to type struct emplouyee again
    {                         // Basically structure is used to store different data types together
        int age;
        char favchar;
        float submissions;
    } ep;
int main(){
    
    ep shubham;               
    {
       shubham.age = 18;
       shubham.favchar = 's';
       shubham.submissions = 132.1;
    };
    cout<<shubham.age<<endl;
    cout<<shubham.favchar<<endl;
    cout<<shubham.submissions<<endl;

   return 0;
}