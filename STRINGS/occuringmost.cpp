#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    string s;
    cout<<"Enter the sentence: "<<endl;
    getline(cin,s);
    sort(s.begin(),s.end());
    char c;
    int max=INT_MIN;
    int count=0;
    if (s.length()==1) cout<<s[0];
    for(int i=1;i<s.length();i++){
            if (s[i]==s[i-1]){
                count++;
            
                if (count>max){
                    max=count;
                    c=s[i];
                }
            }
        }
        cout<<c;
        return 0;
}