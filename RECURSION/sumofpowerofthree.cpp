 #include <iostream>
 using namespace std;
 int main() {
     int arr[]={2, 5, 9, 14, 18, 23, 30, 35, 41, 50};
     int low=0;
     int high=9;
     int target=38;
     int bm;  //expected output will be 
     while (low<=high){
        int mid=low+(high-low)/2;
         bm=mid;
        if(arr[mid]==target) return mid;
        else if (arr[mid]<target) low=mid+1;
        else if (arr[mid]>target) high=mid-1;
    }
    cout<<bm;

     return 0;
 }