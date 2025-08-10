#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"Enter the sentence: ";
    getline(cin,s);
    // int length=s.length();

    // // reverse(s.begin(),s.begin()+(length/2));
    // cout<<s<<endl;
    // reverse(s.begin(),s.end());
    // cout<<"second half of the string is : "<<s.substr(length/2);
    sort(s.begin(),s.end());
    cout<<s;
    return 0;
}