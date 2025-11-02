#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int arr[]={2,4,6,8,6,5,4,3,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int pvsum=0;
    int p=0,q=k;
    for (int i=0;i<3;i++){
        pvsum+=arr[i];
    }
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        if(q>n) break;
        pvsum=pvsum+arr[q]-arr[p];
         p++;
         q++;
         maxsum=max(pvsum,maxsum);
    }
        cout<<maxsum;
    return 0;
}