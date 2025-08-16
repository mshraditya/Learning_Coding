#include <iostream>
#include <vector>
using namespace std;
void subArray( vector<int>v,int arr[],int n,int indx){
    if(indx==n){
        for(auto x:v) cout<<x;
        cout<<endl;
        return;
    }
    subArray(v,arr,n,indx+1);
    if (v.size()==0 || arr[indx-1]==v[v.size()-1]){
        v.push_back(arr[indx]);
        subArray(v,arr,n,indx+1);
    }
}
int main() {
    int arr[]={1,4,5,6};
    vector<int>v;
    int n=sizeof(arr)/sizeof(arr[0]);
    subArray(v,arr,n,0);
    return 0;
}