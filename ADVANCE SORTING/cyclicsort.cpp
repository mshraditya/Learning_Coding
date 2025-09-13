#include <iostream>
using namespace std;
int main() {
    int arr[9]={4,5,8,1,9,2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;
    while(i<n){
        int correctindx=arr[i]-1;
        if(arr[i]==arr[correctindx]){
            i++;
        }
        else swap(arr[i],arr[correctindx]);
    }
    for(int ele:arr) cout<<ele<<" ";
    return 0;
}