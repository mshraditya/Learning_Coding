#include <iostream>
#include <vector>   //rotaion of specific index
using namespace std;
// int  swap(int x,int y){
//     int temp;
//     temp =x;
//     x=y;
//     y=temp;
//     return(x,y);
// }
void Rotation(vector<int>&nums,int x,int y){
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
    nums.push_back(12);
    nums.push_back(13);
    nums.push_back(132);
    nums.push_back(112);
    nums.push_back(9);
    nums.push_back(2);
    nums.push_back(212);
    nums.push_back(0);
    int x,y;
    cout<<"enter the target number "<<endl;
    cin>>x>>y;
    Rotation(nums,x,y);
    for(int Print:nums){
        cout<<Print<<" ";
    }
    return 0;
}