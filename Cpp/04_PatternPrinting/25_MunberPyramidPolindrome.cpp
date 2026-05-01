#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"No. of Lines : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j<=n-i ; j++ ){
            cout<<" ";
        }

        for(int k = 1; k<=i ; k++){
            cout<<k;
        }
        for(int l = i-1 ; l>=1 ;l--){
            cout<<l;//--> -
                    //    1
                    //    2 1
                    //    3 2 1
        }

        cout<<endl;
    }
}