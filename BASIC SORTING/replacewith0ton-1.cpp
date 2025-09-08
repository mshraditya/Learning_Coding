#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int arr[]={24,36,82,34,92,1};
    vector<int>v(6,0);
    int x=0;
    for(int i=0;i<6;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=0;j<6;j++){
            if(v[j]==1) continue;
            else{
               if(min>arr[j]){
                min=arr[j];
                mindx=j;
               } 
            }
        }
        arr[mindx]=x;
        v[mindx]=1;
        x++;
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
    
    return 0;
}