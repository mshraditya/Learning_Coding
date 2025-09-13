#include <iostream>
using namespace std;
int pivotIndex(int arr[],int si,int li){
    int pivotEle=arr[si];
    int count=0;
    for(int i=si+1;i<=li;i++){
        if(arr[i]<=pivotEle) count++;
    }
     int pivotIndx=count+si;
     swap(arr[si],arr[pivotIndx]);
     int i=si;
     int j=li;
     while(i<pivotIndx && j>pivotIndx){
        if(arr[i]<=pivotEle) {
            i++;
        }
         if(arr[j]>pivotEle){
            j--;
         }
         if(arr[i]>pivotEle && arr[j]<pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
         }

     }
     return pivotIndx;  
}
int quicksort(int arr[],int si,int li,int k){
        int pi=pivotIndex(arr,si,li);
        if(k==pi+1) return arr[pi];
        else if (k>pi+1) return quicksort( arr, pi+1, li,k);
       else return  quicksort( arr, si, pi-1,k);
}

int main() {
    int arr[]={23, 5, 87, 12, 34, 22, 66, 42, 9, 71};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int k=1;
    cout<<quicksort(arr,0,n-1,k);

    return 0;
}