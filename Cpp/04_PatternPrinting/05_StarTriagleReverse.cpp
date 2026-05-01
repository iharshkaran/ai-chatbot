#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of rows : ";
    cin>>n;
    // for(int i = n ; i>0 ; i--){
    //     for(int j = 1 ; j <= i ; j++){
    // my method

    // no of stars = n + 1 - i
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j <= n + 1 - i ; j++){//Teachers method
            cout<<"* ";
        }
        cout<<endl;
    }
}