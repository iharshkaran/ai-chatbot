#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of rows  : ";
    cin>>n;
    bool flag = true;
    
    // for(int i = 65 ; i <(n+65) ; i++){
    //     for(int i = 65 ; i < n+65 ; i++){
    //         cout<<char(i)<<" ";
    for(int i = 1 ; i <= n ; i++){
        for(int i = 1 ; i <= n ; i++){
            cout<<char(i + 64)<<" ";
        }
        cout<<endl;
    }
}