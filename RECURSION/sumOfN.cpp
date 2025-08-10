#include <iostream>
using namespace std;
void SumPara(int i,int n){
    if (n==0) {
        cout<<i;
        return;
    }
    SumPara(i+n,n-1);
}
int Sum(int n){
    if (n==0) return 0 ;
    
   return n+Sum(n-1);
}
int main() {
    int n;
    cout<<" Enter the Number : "<<endl;
    cin>>n;
    SumPara(0,n);

    cout<<endl;
    cout<<Sum(n);
    return 0;
}