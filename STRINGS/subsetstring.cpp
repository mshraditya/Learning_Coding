#include <iostream>
#include <string>
using namespace std;
// void Subsetmaker(string s,string t){
//     if (t==""){
//         cout<<s<<endl;
//         return;
//     }
//         char ch=t[0];
// Subsetmaker(s+ch,t.substr(1));
// Subsetmaker(s,t.substr(1));
// }
void subsetmakerwithIndex(string s,string t,int indx){
    if (t.size()==indx) {
        cout<<s<<endl;
        return;
    }
        char ch= t[indx];
        subsetmakerwithIndex(s+ch,t,indx+1 );
        subsetmakerwithIndex(s, t,indx+1);
}
int main() {
    string t;
    cout<<"Enter the word: ";
    getline(cin,t);
        // Subsetmaker("",t);
        subsetmakerwithIndex("",t,0);
        // cout<<t.substr(2);
    return 0;
}