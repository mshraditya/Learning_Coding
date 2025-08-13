#include <iostream>
#include <vector>
using namespace std;
void arraySubsequence(int arr[],vector<int>v,int n,int indx,int val){
    if(indx==n) {
       if (v.size()==val){
        for (int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
       }
       return;
    }
    arraySubsequence(arr,v,n,indx+1,val);
    v.push_back(arr[indx]);
    arraySubsequence(arr,v,n,indx+1,val);
}
int main() {
     int arr[]={1,4,7,5};
        vector<int>v;
        arraySubsequence(arr,v,4,0,3);
    return 0;
}