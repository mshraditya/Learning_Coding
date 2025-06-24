#include <iostream>
#include <vector>
using namespace std;
// void Dutchflag(vector<int>nums){
//  int high=nums.size()-1;
//  int mid = 0;
//  int low =0;
//  while(mid<=high){
//     if (nums[mid]==2){
//         int temp=nums[high];
//         nums[high]=nums[mid];
//         nums[mid]=temp;
//         high--;
//     }
//     else if (nums[mid]==0){
//          int temp=nums[mid];
//         nums[mid]=nums[low];
//         nums[low]=temp;
//         low++;
//         mid++;
//     }
//     else{
//         mid++;
//     }

//  }
// }
  void sortColors(vector<int>& nums) {
        int high=nums.size()-1;
 int mid = 0;
 int low =0;
 while(mid<=high){
    if (nums[mid]==2){
        int temp=nums[high];
        nums[high]=nums[mid];
        nums[mid]=temp;
        high--;
    }
   else if (nums[mid]==0){
         int temp=nums[mid];
        nums[mid]=nums[low];
        nums[low]=temp;
        low++;
        mid++;
    }
   else{
        mid++;
    }

 }
    }
int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    for(int i =0;i<nums.size();i++){
        cout<<nums[i];
    }
    cout<<endl;
    sortColors(nums);
    for(int i =0;i<nums.size();i++){
        cout<<nums[i];

    }
    cout<<endl;
    sort(nums.begin(),nums.end());
    for(int i =0;i<nums.size();i++){
        cout<<nums[i];

    }
    return 0;
}