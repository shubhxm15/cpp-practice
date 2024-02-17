#include<iostream>
using namespace std;
                                           // Call by Reference by using pointers
void g()
{
    cout<<"Hello Bachoo..!!"<<endl;
}
void swapingPointer(float* a, float* b)    
    {                                      // So basically it will take the address value at a and b
        float temp = *a;
        *a = *b;
        *b = temp;
    }

int main(){
   float x, y;

   g();
   cout<<"Enter value of x: ";
   cin>>x;
   cout<<"Enter value of y: ";
   cin>>y;

   cout<<"\nThe value of x is "<<x<<"\nThe value of y is "<<y<<endl;

   swapingPointer(&x, &y);                // It will pick up the address value at x and y

   cout<<"These are swaped values "<<endl;
   cout<<"\nThe new value of x is "<<x<<"\nThe new value of y is "<<y<<endl;

    return 0;
}