#include <iostream>
#include <vector>
using namespace std;
void sortcolor(vector<int>&nums){
    int n=nums.size();
    int low =0;
    int mid=0;
    int high=n-1;

    while (mid<=high){
        if (nums[mid]==2){
            int temp;
           temp=nums[mid];
           nums[mid]=nums[high];
           nums[high]=temp;
           high--;
        }
        else if (nums[mid]==0){
            int temp;
            temp=nums[low];
            nums[low]=nums[mid];
            nums[mid]=temp;
            low++;
            mid++;
        }
        else{
            mid++;
        }
        
    }
     
}
int main() {
      vector<int>sorting;
    sorting.push_back(2);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(2);
    sorting.push_back(2);
    sorting.push_back(1);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(2);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(2);
    sortcolor(sorting);
    for (int sorted:sorting){
        cout<<sorted<<" ";
    }
    return 0;
}