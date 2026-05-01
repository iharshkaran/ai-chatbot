#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" is a composite Number";
        }
        else cout<<n<<" is not a composite Number";
    break;
    }
    
}