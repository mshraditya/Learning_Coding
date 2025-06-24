#include <iostream>
#include <vector>
using namespace std;
void mergeANDshort(vector<int>&nums1,vector<int>&nums2,vector<int>&nums3){
 int i=0;
    int j=0;
    int k=0;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            i++;
            k++;
        }
        else{
            nums3[k]=nums2[j];
            j++;
            k++;
            
        }
        if(i==nums1.size()){
            while (j<nums2.size()) {
                 nums3[k]=nums2[j];
                 j++;
                 k++;
            }
            
        }
        if(j==nums2.size()){
            while (i<nums1.size()) {
                 nums3[k]=nums1[i];
                 i++;
                 k++;
            }
            
        }

    }
        // else if(nums1[i]==nums2[j]){
        //     nums3[k]=nums1[i];
        //     k++;
        //     nums3[k]=nums1[i];
        //     i++;
        //    j++;
        // }
}
int main() {
    vector<int>nums1={1,2,4,4,6,8,9};
    vector<int>nums2={1,2,3,4,5,6,7};
    vector<int>nums3(nums1.size()+nums2.size());

    mergeANDshort(nums1,nums2,nums3);
        for(int i=0;i<nums1.size()+nums2.size();i++){
              cout<<nums3[i]<<" ";
            }
    return 0;
}