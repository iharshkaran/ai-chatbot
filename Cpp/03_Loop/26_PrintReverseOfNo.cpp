#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int Rev = 0;
    while(n>0){
        int lastDig = n%10;
        Rev = (Rev*10) + lastDig;
        n/=10;
        
    }
    cout<<Rev;
}