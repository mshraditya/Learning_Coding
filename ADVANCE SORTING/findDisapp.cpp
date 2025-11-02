#include <iostream>
#include <vector>
using namespace std;
int main() {
    int arr[]={3,4,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;
     while(i<n){
            int CorrectIndex=arr[i]-1;
            if(arr[i]==arr[CorrectIndex] || arr[i]<0) i++;
            else swap(arr[i],arr[CorrectIndex]);
        }
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;
     for(int i=0;i<n;i++) {
            if(arr[i]!=i+1) cout<<i+1;
        }
    vector<int>ans;
   
    //  for(int i=0;i<n;i++){
    //         if(arr[i]!=i+1) ans.push_back(i+1);
    //     }
    // for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}