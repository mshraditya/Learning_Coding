#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> vec;
    int n;
    cout<<"Enter the size of string vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        vec.push_back(temp);
    }
    string s;
    sort(vec.begin(),vec.end());
    int j=0;
while (vec[0][j]==vec[vec.size()-1][j]){
    s.push_back(vec[0][j]);
    j++;
}
    
    return 0;
}