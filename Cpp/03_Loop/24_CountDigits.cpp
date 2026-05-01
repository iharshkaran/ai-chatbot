#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    // int a = 1;
    // for(int i = 10;i<=n;i){
    //     if(n/=i){
    //          a++;
    //     }
    // }
    // cout<<a;
    // ----------------> My Method 1 .....
    int count =1;
    while(n/=10){
        count++;
    }
    cout<<count;
    // ----------------> My method 2 .....
    // int count = 0;
    // int a = n;
    // while(n>0){
    //     n/=10;
    //     count++;
    // }
    // if(a==0) cout<<1;
    // else cout<<count;//---> teacher's method
}