#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"No. of rows  : ";
    cin>>n;
    
    for(int i = 1 ; i <= n ; i++){
        int start = 1;
    int end = 5;
        for(int j = 1 ; j <= n ; j++){
            if(j == i || i + j == n+1){ 
                cout<<"* ";   
        }
        else cout<<"  ";  
        }
        cout<<endl;
    }
}