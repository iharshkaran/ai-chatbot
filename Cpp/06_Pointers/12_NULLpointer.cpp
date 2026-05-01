#include<iostream>
using namespace std;
int main(){
    int *ptr = NULL; //reserved address // 0x0
    int *ptr2 = 0;
    int *ptr3 = '\0';
    cout<<ptr<<" "<<ptr2<<" "<<ptr3; //0x0
    // \0 -> null character
}