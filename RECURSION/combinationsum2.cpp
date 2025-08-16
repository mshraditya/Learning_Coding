#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int>v,vector<int>&arr,int n,int target,int indx){
    if(target==0){
        for(auto x:v) cout<<x;
        cout<<endl;
        return;
    }
    if(target<0) return;
        for(int i=n-1;i>=indx;i++){
            v.push_back(arr[i]);
             combination(v,arr,n-1,target-arr[i],i); 
             arr.pop_back();
             v.pop_back();
        }
}
int main() {
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int n=arr.size();
    int target=7;
    vector<int>v;
    combination(v,arr,n,target,0);
    return 0;
}