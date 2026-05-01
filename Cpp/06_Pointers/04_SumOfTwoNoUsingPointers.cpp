#include<iostream>
using namespace std;

int main(){
    // int x , y;
    // int *p = &x;
    // int *p2 = &y;
    // *p = 5;
    // *p2 = 10;
    // cout<<*p + *p2;

    int x, y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter first Number : " ;
    cin>>*p1;
    cout<<"Enter second Number : " ;
    cin>>*p2;
    cout<<*p1 + * p2;

}