//permutation of a non repetative character
#include <iostream>
#include <string>
using namespace std;
void permutation(string s, string p){
    if (s==""){
        cout<<p<<endl;
        return ;

    }
    for (int i=0;i<s.size();i++){
        char ch =s[i];
     string left =s.substr(0,i);
     string right =s.substr(i+1);
     permutation(left+right,p+ch);
    }
}
int main() {
    string s;
    cout<<"Enter the Non-Repetative Words"<<endl;
    getline(cin,s);
    cout<<endl;
    cout<<endl;
    permutation(s,"");
    return 0;
}