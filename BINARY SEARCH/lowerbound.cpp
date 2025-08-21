#include <iostream>
using namespace std;
int main() {
    int arr[10]={2,4,7,9,12,16,18,24,65,98};
    int n=9;
    int h=9,l=0;
    int t=98;
    bool found =false;
    if(t==arr[0]) cout<<"No lower Bound found ";
    else{
    while (l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==t){
            found=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]>t){
            h=mid-1;
        }
        else if(arr[mid]<t){
            l=mid+1;
        }
    }
}
    if (found==false){
        cout<<arr[l-1];
    }
    return 0;
}