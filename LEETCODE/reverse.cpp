#include <iostream>
#include <climits>
using namespace std;
//  int reverse(int p){
//     int multiplier=1;
//     int Reverse=0;
//     while (p>0){
//         multiplier=p%10;
//         p/=10;
//         Reverse+=multiplier*10;
//     }
//     cout<<Reverse;
//     return Reverse;
//  }
int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
     int ans=0;
     while (n!=0){
      int   x=n%10;
      if (ans>INT_MAX ||ans<INT_MIN){
         return 0;
      }
        ans=(ans*10)+x;
        n/=10;
     }
     return ans;

    return 0;
}