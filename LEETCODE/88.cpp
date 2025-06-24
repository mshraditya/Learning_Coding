#include <iostream>
#include <vector>
using namespace std;
void MergeAndShort(vector<int>&nums1,vector<int>&nums2){
   int m=nums1.size();
  int n=nums2.size();
  int j=n ;
  int i=0,l=m;
  for(int j=0;j<=nums1.size();i++){
    if(nums1[j]!=0){
         i++;
    }
  }
  while(i>0 && j>0){
    if(nums1[i]<nums2[j]){
        nums1[l]=nums2[j];
        l--;
        j--;
        
    }
    else {
        nums1[l]=nums1[i];
        l--;
        i--;
    }
  }
  
}
int main() {
     vector<int>nums1;
     nums1.push_back(1);
     nums1.push_back(3);
     nums1.push_back(5);
     nums1.push_back(7);
     nums1.push_back(9);
     vector<int>nums2;
     nums2.push_back(2);
     nums2.push_back(6);
     nums2.push_back(9);
    MergeAndShort(nums1,nums2);
    for(int i =0;i<nums1.size();i++){
        cout<<nums1[i]<<endl;
    }

}
