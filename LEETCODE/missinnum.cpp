#include <iostream>
using namespace std;
int main() {
    vector<int>nums;
    nums.push_back(9);
    nums.push_back(6);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);
    sort(nums.begin(),nums.end());
    // for(auto x:nums) cout<<x<<" ";
    // cout<<endl;
     int missingnumber=0;
     for(int i=0;i<nums.size();i++){
            if(nums[i]==missingnumber){
                missingnumber++;  
            }
            else{
                break;
            }
        }
            cout<<missingnumber;
    return 0;
}