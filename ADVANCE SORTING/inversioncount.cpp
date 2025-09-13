#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int c=0; 
    void counter(vector<int>&nums1,vector<int>&nums2){
        int i=0,j=0;
        if(nums1[i]<nums2[j]){
            c+=nums1.size()-i ;
            i++;
            j++;
        } 
    }
void MergeShort(vector<int>&nums1,vector<int>&nums2,vector<int>&nums3){
        int i=0,j=0,k=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]) nums3[k++]=nums2[j++];
            else nums3[k++]=nums1[i++];
        }
        if(i==nums1.size())  while(j<nums2.size()) nums3[k++]=nums2[j++];
        if(j==nums2.size())  while(i<nums1.size()) nums3[k++]=nums1[i++];
}
        void Merge(vector<int>&nums3){
            if(nums3.size()==1) return;
            int n1=nums3.size()/2;
            int n2=nums3.size()-n1;
            vector<int>v1(n1);
            vector<int>v2(n2);
            for(int i=0;i<n1;i++) v1[i]=nums3[i];
            for(int i=0;i<n2;i++) v2[i]=nums3[i+n1];

             Merge(v1);
             Merge(v2);
             counter(v1,v2);
             MergeShort(v1,v2,nums3);
        }
int main() {
    vector<int>nums1;
    nums1.push_back(0);
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(5);
    vector<int>nums2;
    nums2.push_back(4);
    nums2.push_back(6);
    nums2.push_back(9);
    nums2.push_back(19);
    vector<int>nums3(nums1.size()+nums2.size());

    for(int i=0;i<nums1.size();i++) nums3[i]=nums1[i];
    for(int i=0;i<nums2.size();i++)  nums3[i+nums1.size()]=nums2[i];
     Merge(nums3);
     cout<<c-1;
    // for(int ele :nums3) cout<<ele<<" ";
    return 0;
}