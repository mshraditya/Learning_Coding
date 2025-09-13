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
void quicksort(int arr[],int si,int li){
        if(si>=li) return;
        int pi=pivotIndex(arr,si,li);
        quicksort( arr, si, pi-1);
        quicksort( arr, pi+1, li);
}

int main() {
    int arr[]={23, 5, 87, 12, 34, 1, 66, 42, 9, 71};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     
    quicksort(arr,0,n-1);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}