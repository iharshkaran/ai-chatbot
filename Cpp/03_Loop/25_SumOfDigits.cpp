#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int lastDig = n%10;
        sum += lastDig;
        n/=10;
        
    }
    cout<<sum;
}