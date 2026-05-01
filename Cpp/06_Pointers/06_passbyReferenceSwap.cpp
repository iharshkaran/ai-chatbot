#include<iostream>
using namespace std;
void swap(int* x ,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a= 6,b=2;
    swap(&a,&b);
    cout<<a<<" "<<b;
}