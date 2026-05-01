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
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else cout<<c<<" i greatest";
    }
    else{
        if(b>c){    
            cout<<b<<" is greatest";
        }
        else cout<<c<<" is greatest";
    }
}