#include <iostream>
#include <vector>
using namespace std;
void display(vector<int>&a){
 for(int i =0 ;i<a.size();i++){
        cout<<a[i]<<" ";
    }
 }
int main() {
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int NoOfZeroes=0;
    int NoOfOnes=0;
    for(int i=0;i<v.size();i++ ){
        if (v[i]==0){
            NoOfZeroes++;
        }
          else if (v[i]==1){
            NoOfOnes++;
        }

    }
    cout<<"Unsorted ARRAY is :";
    display(v);
    cout<<endl;
    cout<<"sorted ARRAY is   :";
    
    for(int i=0;i<NoOfZeroes;i++){
        v[i]=0;
    }
    for(int i=NoOfZeroes;i<v.size();i++){
        v[i]=1;
    }
    display(v);
    return 0;
}