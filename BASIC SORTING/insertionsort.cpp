#include <iostream>
using namespace std;
int main() {
    int arr[]={4,6,9,4,2,5,7,32,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
             swap(arr[j],arr[j-1]);
             j--;   
        }
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}