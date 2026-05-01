#include<iostream>
using namespace std;
int main(){
int a= 15;
int* ptr = &a;
    int b = ++(*ptr);
    cout<<a<<" "<<b<<endl<<endl;

    int x= 15;
int* p = &x;
    int y = (*p)++;
    cout<<x<<" "<<y<<endl;
}
