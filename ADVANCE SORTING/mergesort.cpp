#include <iostream>
#include<vector>
using namespace std;
    void merge(vector<int>& nums1, vector<int>& nums2,vector<int>&ans){
            int i=0;
            int j=0;
            int k=0;
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i]<nums2[j])  ans[k++]=nums1[i++];
                else ans[k++]=nums2[j++];
            }
            if(i==nums1.size()) while(j<nums2.size()) ans[k++]=nums2[j++];
            if(j==nums2.size()) while(i<nums1.size()) ans[k++]=nums1[i++];
        }

    void MergeSort(vector<int>&ans){
        if(ans.size()==1) return;
        int n1=ans.size()/2;
        int n2=ans.size()-n1;
        vector<int>a(n1);
        vector<int>b(n2);
        for(int i=0;i<n1;i++){
            a[i]=ans[i];
        }
         for(int i=0;i<n2;i++){
            b[i]=ans[i+n1];
        }
        MergeSort(a);
        MergeSort(b);
        merge(a,b,ans);
    }
        

    int main() {
        vector<int>nums1;
        nums1.push_back(1);
        nums1.push_back(3);
        nums1.push_back(4);
        nums1.push_back(7);
        vector<int>nums2;
        nums2.push_back(5);
        // nums2.push_back(7);
      int n=nums1.size();
        int m=nums2.size();
        vector<int>v(n+m);
        for(int i=0;i<n;i++){
            v[i]=nums1[i];
        }
         for(int i=0;i<m;i++){
            v[i+n]=nums2[i];
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        MergeSort(v);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        float n1=v.size();
        
         if(v.size()%2!=0) cout<<v[(n1)/2];
         else       

         return 0;
    }