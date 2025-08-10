#include <iostream>
#include <string>
using namespace std;
int main() {
    long x;
    cout<<"Enter the number : ";
    cin>>x;
    string s=to_string(x);
int noOfDigit=s.length();
cout<<noOfDigit;
    return 0;
}