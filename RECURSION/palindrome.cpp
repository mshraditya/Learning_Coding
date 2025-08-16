#include <iostream>
#include <string>
using namespace std;
bool palindrome(string s,int j,int i){
    if (i>j) return true;
    if (s[i]!=s[j]) return false;
    else return  palindrome(s,j-1,i+1);
    
}
int main() {
    string s ="racecar";
    int n=s.length();
   cout<<palindrome(s,n-1,0);
    return 0;
}