#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6};
    int pp=1;
    vector<int>pre(6);
    pre[0]=1;
    for(int i=0;i<5;i++){
        pp*=arr[i];
        pre[i+1]=pp;
    }
    for(int ele:pre) cout<<ele<<" ";
    cout<<endl;
     vector<int>suf(6);
        int sp=1;
        suf[5]=1;
        for(int i=5;i>0;i--){
            sp*=arr[i];
            suf[i-1]=sp;
        }

        for(int ele:suf) cout<<ele<<" ";
        cout<<endl;
          vector<int>ans(6);
        for(int i=0;i<6;i++){
            ans[i]=suf[i]*pre[i];
        }
        for(int ele:ans) cout<<ele<<" ";


    return 0;
}