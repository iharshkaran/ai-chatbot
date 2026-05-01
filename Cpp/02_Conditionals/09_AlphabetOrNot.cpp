#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int x = (int)ch;
    if((96<x && 123>x) || (64<x && 91>x)){
        cout<<"Given Character is Alphabet";
    }
    else cout<<"Given Character is not Alphabet";

    
}
