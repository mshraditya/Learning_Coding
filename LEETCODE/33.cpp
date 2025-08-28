#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>v;  //3 4 5 6 7 0 1 2
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0);
    v.push_back(1);
    int n=v.size();
    int indx=-1;
    int lo=0,hi=n-1;
    int target=6;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(v[mid]>v[mid+1] && v[mid]>v[mid-1]){
            indx=mid+1;
            break;
        }
        else if(v[mid]<v[mid-1] && v[mid]<v[mid+1]){
             indx=mid;
             break;
        }
        else if(v[mid]>v[hi]) lo=mid+1;
        else if(v[mid]<v[hi])  hi=mid-1;
    }
    if(target>v[0] && target<v[indx-1]){
        int lo=0;
        int hi=indx;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(v[mid]==target){ 
                cout<<mid;
                break;
            }
            else if(v[mid]<target) lo=mid+1;
            else if (v[mid]>target) hi=mid-1;
        }
    }
    else{
        int lo=indx;
        int hi=v.size()-1;
        while(lo<=hi){
             int mid=lo+(hi-lo)/2;
            if(v[mid]==target) {
                cout<<mid;
                break;
            }
            else if(v[mid]<target) lo=mid+1;
            else if (v[mid]>target) hi=mid-1;
        }
    }
    return 0;
}