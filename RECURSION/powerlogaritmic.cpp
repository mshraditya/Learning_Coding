#include <iostream>
using namespace std;
int power(int a,int b){
    if (b==1) return a;
    int x=pow(a,b/2);
    if (b%2==1) return x*x*x;
   else   return x*x;
}
int main() {
    cout<<power(3,6);
    return 0;
}