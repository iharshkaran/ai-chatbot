#include<iostream>
using namespace std;
int main(){
    int x =5 ,y=10;
    cout<<&x<<" "<<&y<< endl;
    int* p1 =&x , p2 =y;//p1 is int pointer but p2 is int
    cout<<p1<<" "<<p2;
}
