#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cout<<"Enter The Numbers "<<endl;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<int>vec;
    while (ss>>temp){
        vec.push_back(stoll(temp));
    }
    int maximumNumber= *max_element(vec.begin(),vec.end());
    cout<<"Maximum number is "<<maximumNumber<<" and ";
    for(int i=0;i<vec.size();i++){
        if(vec[i]==maximumNumber){
            cout<<" Index of the number is "<<i;
        }
    }
    return 0;
}