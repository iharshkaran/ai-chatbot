#include<iostream>
using namespace std;
void find(int n,int* ptr1,int* ptr2){
    *ptr2 = n%10; //latsDigit
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;
}
int main(){
    int n;
    cin>>n;
    int firstDigit,LastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &LastDigit;
    find(n,ptr1,ptr2);
    cout<<firstDigit<<" "<<LastDigit;

}