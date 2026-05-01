#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int a = 1,b=1,fib=0;
    for(int i = 1; i<n-1 ; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    cout<<b;
}