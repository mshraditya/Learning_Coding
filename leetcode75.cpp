#include <iostream>
#include <vector>
using namespace std;
void change(int x,int y,vector<int>&v,int z){
for(int i=x;i<y;i++){
    v[i]=z;
}
}
void Display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }


int main() {
    vector<int>nums;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
 int z=0;
 int o=0;
 int t=0;
    for (int i=0;i<v.size();i++){
        if(nums[i]==0){
            z++;
        }
       else  if(nums[i]==1){
            o++;
        }
        else{
            t++;
        }

    }
    cout<<z<<o<<t<<endl;
    for(int i=0 ;i<z;i++){
        nums[i]=0;
    }
    for(int i=z ;i<o+z;i++){
        nums[i]=1;
    }
    for(int i=o+z ;i<z+o+t;i++){
        nums[i]=2;
    }
    Display(nums);
    return 0;
}