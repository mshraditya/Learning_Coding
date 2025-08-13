#include <iostream>
#include <vector>
using namespace std;
void arraySubset(int arr[],vector<int>v,int n,int indx){
    if(indx==n){
        for(auto x:v) cout<<x;
        cout<<endl;
        return;
    }
    int p=arr[indx];
     arraySubset(arr,v,n,indx+1);
     v.push_back(p);
     arraySubset(arr,v,n,indx+1);

}
int main() {
    // int n;
    // cout<<"Enter the size of the Vector:";
    // cin>>n;
    // vector<int> v(n);
    // for (auto &x : v) cin >> x;
    // for (auto x : v) cout<< x;
        int arr[]={1,4,7};
        vector<int>v;
        arraySubset(arr,v,3,0);

     
    return 0;
}