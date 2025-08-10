#include <iostream>
using namespace std;
void RemoveAchar(string s,string orginal,int indx){
    if (indx==orginal.length()){
        cout<<s;
        return;
    }
    char ch=orginal[indx];
if (ch=='a') RemoveAchar(s,orginal,indx+1 );
else  RemoveAchar(s+ch,orginal ,indx+1);
}
int main() {
    string s;
    cout<<"Enter the Sentece : ";
    getline(cin,s);
RemoveAchar("",s,0);
    return 0;
}