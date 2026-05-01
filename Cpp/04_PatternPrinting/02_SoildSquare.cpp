#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of rows  : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int i = 1 ; i <= n ; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
}