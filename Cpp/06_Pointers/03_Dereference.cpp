#include<iostream>
using namespace std;

int main(){
    int x = 100;
    int *p = &x;
    cout<<*p<<endl;
    x = 50;
    cout<<*p<<endl;
    *p = 25;
    cout<<*p<<endl;
}