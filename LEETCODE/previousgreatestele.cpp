#include <iostream>
using namespace std;
int main() {
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(height) / sizeof(height[0]);
      for (int x : height) {
        cout << x << " ";
    }
    cout<<endl;
    // finding previous greates element
    int pge[n];
    pge[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        pge[i]=max;
        if(height[i]>max) max=height[i];
    }
    //  for (int x : pge) {
    //     cout << x << " ";
    // }
    cout<<endl;
    // finding Next greatest element 
    int nge[n];
    nge[n-1]=-1;
    max=height[n-1];
    for(int j=n-2;j>=0;j--){
        nge[j]=max;
        if(height[j]>max) max=height[j];
    }
    //  for (int x : nge) {
    //     cout << x << " ";
    // }
    cout<<endl;
    //finding minimum of Next gretest and Previous gretatest
    int minarr[n];
    for (int i=0;i<n;i++){
        minarr[i]=min(nge[i],pge[i]);
    }
    for (int x : minarr) {
        cout << x << " ";
    }
    cout<<endl;
    int water;
    int container=0;
    for(int i=0;i<n;i++){
        if(height[i]<minarr[i]) {water=minarr[i]-height[i];
        container+=water;
        }
    }
    cout<<container;
    return 0;
}