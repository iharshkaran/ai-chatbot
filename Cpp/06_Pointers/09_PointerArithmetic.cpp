#include<iostream>
using namespace std;
int main(){
    int a =5;
    int *p = &a;
    cout<<p<<endl; //0xa7d7bffd84
    p= p + 1;
    cout<< p <<endl<<endl; //0xa7d7bffd88

    bool flag = true;
    bool *p1 = &flag;
    cout<<p1<<endl; //0xec06bffd9b
    p1 = p1 + 1;
    cout<<p1<<endl<<endl; //0xec06bffd9c

    int x =4;
    int* ptr = &x;
    cout<<*ptr<<endl; //4
    ptr = ptr +1;
    cout<<*ptr<<endl<<endl;//28263792

    int y =4;
    int* ptr2 = &y;
    cout<<*ptr2<<endl; //4
    *ptr2 = *ptr2 +1;
    cout<<*ptr2<<endl<<endl; //5

    int b =4;
    int* ptr3 = &b;
    cout<<*ptr3<<endl; //4
    (*ptr3)++; //(*ptr3)++ != *ptr++
    cout<<*ptr3<<endl<<endl; //5

}