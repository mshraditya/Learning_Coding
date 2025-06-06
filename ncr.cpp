#include <iostream>
using namespace std;
int factorial(int n){
    int factorial = 1;
    for(int i = 1; i<=n;i++){
     factorial*=i;
    }
     return factorial;
}
int ncr(int n,int r){
    int ncr=factorial(n)/(factorial(n-r)*factorial(r));
    return ncr;
}
int main() {
    int n,r;
    cout<<"Enter the value of N ";
    cin>>n;
    cout<<"Enter the value of R ";
    cin>>r;
    int nfactorial=factorial(n);
    int rfactorial=factorial(r);
    int nrfactorial=factorial(n-r);
    cout<<ncr(n,r);

    }
  

