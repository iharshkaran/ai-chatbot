#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter Base : ";
    cin>>a;
    cout<<"Enter Exponent : ";
    cin>>b;
    bool flag = true;//true means power positive
    if(b<0){
        flag = false;//false -> negative
        b = -b;
    }
    float pow = 1;
    for(int i =1 ; i<=b;i++){
        pow*=a;
    }
    if(flag == false){
        pow = 1/pow;
        b = -b;
    }
    if(a==0 & b==0) cout<<"Not defined";
    else cout<<a<<" Raised to the power "<<b<<" is "<<pow;
}
