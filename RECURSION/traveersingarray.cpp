#include <iostream>
#include <vector>
using namespace std;
// void traverse( int array[],int n,int indx){
//     if (indx==n) return ;
//     cout<<array[indx]<<" ";
//     return traverse(array,n,indx+1);
// }
void traversevector(vector<int>&v,int indx){
    if(indx==v.size()) return;
    cout<<v[indx]<<" ";
    traversevector(v,indx+1);

}
int main() {
    int array[]={2,4,2,4,6,23243243,5,3,213,4,623,7};
    int n=sizeof(array)/sizeof(array[0]);
    // traverse(array,n,0);
    vector<int>v(n);
    for (int i=0;i<n;i++){
            v[i]=array[i];
            // cout<<v[i]<<" ";
    }
    traversevector(v,0);

    return 0;
}