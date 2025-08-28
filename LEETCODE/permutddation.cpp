#include <iostream>
#include <vector>
#include <string>
using namespace std;
   void  permutation(string p,string s){
        if(s.size()==0){
            cout<<p<<endl;
            return;
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            string leftward=s.substr(0,i);
            string rightward=s.substr(i+1);
            permutation(p+ch,leftward+rightward);
        }

    }
int main() {
     string s="123";
     permutation("",s);
    return 0;
}