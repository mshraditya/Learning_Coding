#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    int n = nums.size();
    int index = -2;  
    for(int i =n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }

    }
    // cout<<index<<endl;
    if(index==-2){
        reverse(nums.begin(),nums.end());
    }
    else{
    for(int j=n-1;j>index;j--){
        if (nums[j]>nums[index]){
            swap(nums[j],nums[index]);
    
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
}



    
    for(int lexicograph:nums){
        cout<<lexicograph<<" ";
    }

    return 0;
}