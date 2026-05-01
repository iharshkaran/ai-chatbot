#include<iostream>
using namespace std;
int main(){
    int a ,b, c;
    cout<<"Enter the Value of a : ";
    cin>>a;
    cout<<"Enter the Value of b : ";
    cin>>b;
    cout<<"Enter the Value of c : ";
    cin>>c;
    if(a>b && a>c) cout<<"a is greater then b and c";
    else if(b>c && b>a) cout<<"b is greater then a and c";
    else cout<<"c is greater then b and a";
}