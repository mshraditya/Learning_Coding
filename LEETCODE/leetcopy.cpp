#include <iostream>
#include <vector>
using namespace std;
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        if (i<0){
            for(int i = 0;i<=j;i++){
                nums1[i]=nums2[i];
            }
            return;
        }
        while(i>=0 && j>=0){
            if(nums1[i]<nums2[j]){
                nums1[k]=nums2[j];
                k--;
                j--;
            }
            else{
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            // if(i==0){
            //    while(j>=0){
            //     nums1[k]=nums2[j];
            //     k--;
            //     j--;
                
            // }
            // if (j==0){
            //      while(i>=0){
            //     nums1[k]=nums1[i];
            //     k--;
            //     i--;  
            // }
            }
        }

int main() {
     vector<int>nums1;
     nums1.push_back(1);
     nums1.push_back(2);
     nums1.push_back(3);
     vector<int>nums2;
     nums2.push_back(1);
     nums2.push_back(5);
     nums2.push_back(6);
     merge(nums1,3,nums2,3);
     cout<<nums1.size()<<"\n";
     for(int i=0;i<6;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}