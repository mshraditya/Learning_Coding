#include <iostream>
#include <string>
using namespace std;
void subset(string p,string s ,int indx){
    if ( indx==s.size()){
        cout<<p<<endl;
        return;
    }
char ch=s[indx];
subset(p+ch,s,indx+1);
subset(p,s,indx+1);
}
int main() {
    string s;
    cout<<"Enter the Non-Repetative Words"<<endl;
    getline(cin,s);
    subset("",s,0);
    return 0;
}