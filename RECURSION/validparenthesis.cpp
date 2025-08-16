#include <iostream>
#include <string>
using namespace std;
void ValidParenthisis(string s,string c,string d,int C,int D,int n){
    if(D==n && C==n){
            cout<<s<<endl;
            return;
    }
         if(C>=D && C<=n){
            ValidParenthisis(s+c,c,d,C+1,D,n);
            ValidParenthisis(s+d,c,d,C,D+1,n);
        }
}
int main() {
    int n;
    cout<<"Enter the Number ";
    cin>>n;
    ValidParenthisis("(","(",")",1,0,n);
    return 0;
}