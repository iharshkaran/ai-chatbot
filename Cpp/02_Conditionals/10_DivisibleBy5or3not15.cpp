#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    // if((n%5==0 || n%3==0)&&n%15!=0){
    //     cout<<"Divisibly By 5 or 3 but not 15";
    // }
    // else cout<<"Not matching Condition";
    if(n%5==0 || n%3==0){
        if(n%15!=0){  
        cout<<"Divisibly By 5 or 3 but not 15";
    }
    else cout<<"Not matching Condition";
}
    else cout<<"Not matching Condition";
}