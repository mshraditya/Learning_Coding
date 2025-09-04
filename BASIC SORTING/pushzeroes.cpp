#include <iostream>
using namespace std;
int main() {
    int   arr[]={1,0,0,0,0,2,0,6,9,-13,6,-1,-90};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
            bool flag =true;
            for(int j=0;j<n-1-i;j++){
                
                if( arr[j]==0 ){
                     swap(arr[j],arr[j+1]);
                      
                }
            }
              
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
    return 0;
}