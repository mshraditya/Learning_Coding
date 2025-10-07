#include <iostream>
#include <vector>
using namespace std;
void twoSum(vector<int>& nums, int target){
 for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<=nums.size()-1;j++){
        if(nums[i]+nums[j]==target){
            cout<<i<<" "<<j<<endl;
        }


    }
 }
}
int main() {
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(13);
    nums.push_back(4);
    nums.push_back(9);
    int n;
    cout<<"Enter the Target Number : "<<endl;
    cin>>n;
    twoSum(nums,n);
    return 0;
}