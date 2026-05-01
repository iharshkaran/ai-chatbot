#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Marks : ";
    cin >> n;
    // if (91 <= n && n <= 100)
    //     cout << "Excellent";
    // if (81 <= n && n <= 90)
    //     cout << "Very Good";
    // if (71 <= n && n <= 80)
    //     cout << "Good";
    // if (61 <= n && n <= 70)
    //     cout << "Can do Better";
    // if (51 <= n && n <= 60)
    //     cout << "Average";
    // if (40 <= n && n <= 50)
    //     cout << "Below Average";
    // else
    //     cout << "fail";
//     if(n>=91){
//         cout<<"Excellent";
//     }
//     else{
//         if(n>=81){
//             cout<<"Very good";
//         }
//         else{
//             if(n>=71){
//                 cout<<"Good";
//             }
//             else{
//                 if(n>=61){
//                     cout<<" Can Do better";
//                 }
//                 else{
//                     if(n>=51){
//                         cout<<"Average";
//                     }
//                     else{
//                         if(n>=41){
//                             cout<<"Below average";
//                         }
//                         else{
//                             cout<<"fail";
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
if(n>=91){
    cout<<"Excellent";
}
else if(n>=81){
    cout<<"Very Good";
}
else if(n>=71){
    cout<<"GOod";
}
else if(n>=61){
    cout<<"can do better";
}
else if(n>=51){
    cout<<"average";
}
else if(n>=41){
    cout<<"below average";
}
else{
    cout<<"fail";
}
}