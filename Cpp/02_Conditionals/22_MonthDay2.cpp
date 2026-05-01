#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Month Number : ";
    cin>>n;
    //1 3 5 7 8 10 12 --> 31
    //4 6 9 11 --> 30
    //2 --> 28
    switch((n<=7 && n%2!=0) || (n>=8 && n%2==0)){
        case 1 :
        cout<<"31";
    }
    switch(n==4 || n==6 || n==9 || n==11){
        case 1:
        cout<<"30";
    }
    switch(n){
        case 2:
        cout<<"28";
    }
}