#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    int x = (int)ch;
    if((96<x && 123>x) || (64<x && 91>x)){
        if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
            cout<<"Given Character is a vowel";
        }
        else{
            cout<<"Given Character is a consonant";
        }
        
    }
    else cout<<"Given Character is not an Alphabet";
}
