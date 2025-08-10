#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s,t;
    cout<<"Enter the first Word"<<endl;
    getline(cin,s);
    cout<<"Enter the second Word"<<endl;
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    else {
            return false;
    }
    return 0;
}