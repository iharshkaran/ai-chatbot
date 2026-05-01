#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of lines : ";
    cin>>n;
    int m = n-1;
    for(int q=1;q<=2*n-1;q++){
        cout<<q;
    }
    cout<<endl;
    for(int i =1 ;i<=m ; i++){
        int a=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
            a++;
        }
        for(int k = 1 ; k <=2*i-1;k++){
            cout<<" ";
            a++;
        }
        
        for(int j=1;j<=m+1-i;j++){
            cout<<a;
        a++;    
        }
        cout<<endl;
    }
}