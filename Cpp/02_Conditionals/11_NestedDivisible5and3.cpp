#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){  
        cout<<"Divisibly By 5 and 3";
    }
    else cout<<"Divisibly By 5 But not 3";
}
    else cout<<"Not Divisibly By 5 and 3";
}