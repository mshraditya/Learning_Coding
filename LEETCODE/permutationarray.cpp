#include <iostream>
#include <vector>
using namespace std;
   void permutation( vector<int>v,vector< vector<int> >&ans){
    if(v.size()==0){
            ans.push_back(v);
    }
    for(int i=0;i<v.size();i++){
        int p=v[i];
        
    }
    }
int main() {
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    vector< vector<int> >ans;
    permutation(v,ans);
    return 0;
}