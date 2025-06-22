#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(43);
    v1.push_back(543);
    v1.push_back(21);
    v1.push_back(123);
    v1.push_back(5432);
    cout<<v1.at(5)<<endl;
    for (int i = v1.size()-1;i>=0;i--){
        v2.push_back(v1.at(i));
    }
    
    for (int j=0 ;j<v2.size();j++){
        cout<<v2.at(j)<<endl;
    }
    return 0;



}