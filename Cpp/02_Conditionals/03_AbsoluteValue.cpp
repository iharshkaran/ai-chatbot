#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter a Number : ";
    cin>>n;
    // if(n>=0) cout<<"Absolute Value is : "<<n;
    // else cout<<"Absolute Value is : "<<-n;
    if(n<0) n = -n;
    cout<<n;
}