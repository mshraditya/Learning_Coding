#include <iostream>
using namespace std;
int kthGrammar(int n,int k){
    if(n==1) return 0;

        if(n%2==0) {  //even flip 
                int ans = kthGrammar(n-1,k/2);
                if (ans==0)  return 1;
                else return 0;   
        }
        else {   
            int ans= kthGrammar(n-1,k/2+1);   // odd same 
             return    ans;
        }
    }
    
int main() {
    cout<<kthGrammar(3,3);
    return 0;
}