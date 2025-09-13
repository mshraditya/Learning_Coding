#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[8]={4,3,2,7,8,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;
    while(i<n){
        int correctindx=arr[i]-1;
        if(arr[i]==arr[correctindx]||i==correctindx){
            i++;
        }
        else swap(arr[i],arr[correctindx]);
    }
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;

    vector<int>ans;
     for(int i=0;i<n;i++){
            if(arr[i]!=i+1) ans.push_back(i+1);
        }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}