#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<"Enter the sentence: ";
    getline(cin,s);
    int length=s.length();
    cout<<length;
    return 0;
}