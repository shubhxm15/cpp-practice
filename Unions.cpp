#include<iostream>
using namespace std;
typedef union furniture                   // Union can store different data types in the same memory
{
    int chairs;
    char table;
    float price;
} ep;
int main(){
    ep diningtable;
    {
        diningtable.chairs = 8;           // But only one data type can contain value at a given time
        // diningtable.table = 't';
        // diningtable.price = 999.9;
    };
    cout<<"Number of chairs are: "<<diningtable.chairs<<endl;
    return 0;
}  