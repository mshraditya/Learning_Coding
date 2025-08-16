#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int>v,int arr[],int n,int target,int indx){
    if(target==0){
        for(auto x:v) cout<<x;
        cout<<endl;
        return;
    }
    if(target<0) return;
        for(int i=indx;i<n;i++){
            v.push_back(arr[i]);
             combination(v,arr,n,target-arr[i],i); 
             v.pop_back();
        }
}
int main() {
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    vector<int>v;
    combination(v,arr,n,target,0);
    return 0;
}