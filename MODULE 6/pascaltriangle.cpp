#include <iostream>
using namespace std ;
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
int main (){
    int n,r;
    cout<<"Enter Number of Row:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        for (int k=0;k<=n-i;k++){
            cout<<" ";
        }
        for (int j =0 ;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}