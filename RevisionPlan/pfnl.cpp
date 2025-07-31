#include <iostream>
#include <vector>
using namespace std;
void transfer(vector<int>&nums){
    int i=0;
    int j=nums.size()-1;
    while(j>i){
         if(nums[i]<0){
            i++;
         }
         else if(nums[j]>0){
            j--;
         }
         else  {
            int temp;
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j--;
            i++;
         }

    }
}
int main() {
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(-1);
    nums.push_back(-931);
    nums.push_back(-912);
    nums.push_back(1);
    nums.push_back(-31);
    nums.push_back(89);
    nums.push_back(-221);
    nums.push_back(11);
    nums.push_back(1333);
    nums.push_back(-1333);
    nums.push_back(9);
    nums.push_back(1029);
    nums.push_back(29);
    nums.push_back(-29);
    transfer(nums);
    for(int fixed:nums){
        cout<<fixed<<" ";
    }
    return 0;
}