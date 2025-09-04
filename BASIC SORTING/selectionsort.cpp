#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[]={4,6,9,4,2,5,7,32,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int indx=-1;
        int min=INT_MAX;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                indx=j;
            }
        }
        swap(arr[i],arr[indx]);
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}