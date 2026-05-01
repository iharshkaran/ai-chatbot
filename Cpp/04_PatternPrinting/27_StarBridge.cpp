#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of line : ";
    cin>>n;
    int nst = 1;
    int nsp = n;
    for(int a=1;a<=2*n+1;a++){
        cout<<"*";
    }
    cout<<endl;
    for(int i = 1; i<= n ;i++){
        //spaces
        for(int j=1;j<=nsp;j++){
        cout<<"*";}
        
        
        //stars
    for(int k = 1; k<=nst ; k++){
            cout<<" ";
    }
    
    nst+=2;
    for(int q=1;q<=nsp;q++){
        cout<<"*";
    }
    nsp--;
    
    cout<<endl;
}}
    