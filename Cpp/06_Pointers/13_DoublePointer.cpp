#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *ptr = &x;
    int **p = &ptr;
    cout<<x<<endl; // 5
    cout<<ptr<<endl; // 0x98f1bff834
    cout<<p<<endl<<endl; // 0x98f1bff828

    cout<<x<<endl; // 5
    cout<<*ptr<<endl; // 5
    cout<<**p<<endl<<endl; // 5
}