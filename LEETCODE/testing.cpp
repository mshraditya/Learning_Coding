#include <iostream>
#include <vector>
using namespace std;

  
int main() {
     vector<int>nums1(8);
     nums1.push_back(1);
     nums1.push_back(3);
     nums1.push_back(5);
     nums1.push_back(7);
     nums1.push_back(9);
     vector<int>nums2;
     nums2.push_back(2);
     nums2.push_back(6);
     nums2.push_back(9);
     int i=0;
     for(int j=0;j<=nums1.size();j++){
    if(nums1[j]!=0){
         i++;
    }
}
cout<<i;

}
