#include<iostream>
using namespace std;
int main(){
    int CP , SP ,Profit , Loss;
    cout<<"Enter the Cost Price : ";
    cin>>CP;
    cout<<"Enter the Selling Price : ";
    cin>>SP;
    if(CP>SP){
        cout<<"Loss Of "<<CP-SP;
    }
    else if(CP<SP){
        cout<<"Profit Of "<<SP-CP;
    }
    else cout<<"Neither Profit nor Loss";
}
