#include <iostream>
using namespace std;
int main() {
    int arr[13]={1,2,2,3,3,3,3,3,4,4,5,8,9}; //desired output is 3;
    int n=13;
    int hi=12,low=0;
    int tg=9;
    while (low<=hi){
        int mid=low+(hi-low)/2;
        if(arr[mid]==tg){
            if(arr[mid+1]==tg){
            low=mid+1;
            }
            else {
                cout<<mid;
                break;
            }
            
        }
        if(arr[mid]<tg){
             low=mid+1;
        }
        if(arr[mid]>tg){
                hi=mid-1;
        }
    }
    return 0;
}