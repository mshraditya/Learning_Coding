#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int>&nums,int x,int y){
 while(y>x){
    int temp;
    temp=nums[x];
    nums[x]=nums[y];
    nums[y]=temp;
    x++;
    y--;
 }
}
int main() {
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(0);
    nums.push_back(3);
    int x;
    cout<<"Enter The value of K : ";
    cin>>x;
    reverse(nums,0,nums.size()-x-1);
    reverse(nums,nums.size()-x,nums.size()-1);
    reverse(nums,0,nums.size()-1);
    for (int print : nums) {
    cout<<print<<" ";
}
    return 0;
}