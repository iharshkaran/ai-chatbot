#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "No. of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {//spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        //stars
        for(int k = 1; k<=i;k++){
            cout<<k;
        }
        cout << endl;
    }   
}