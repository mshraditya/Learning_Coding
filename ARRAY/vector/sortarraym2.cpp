#include <iostream>
#include <vector>
using namespace std;
void shortOloop(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        else if (v[i]==1 && v[j]==0){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
        }
    }
}
int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    shortOloop(v);
    for(int i =0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
    return 0;
}