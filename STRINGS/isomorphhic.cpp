#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
string s;
string t;
cout<<"Enter the First Word : ";
getline(cin,s);
cout<<"Enter the  Second Word : ";
getline(cin,t);
vector<int>arr1(150,0);
for(int i=0;i<s.size();i++){
    char wr=s[i];
    arr1[(int)wr]++;
}
vector<int>arr2(150,0);
for(int i=0;i<s.size();i++){
    char p=t[i];
    arr2[(int)p]++;
}

}
//isomorphic character
// my concept is calaculate the number
// of unique character is i can calculate this
// then question will be solved 