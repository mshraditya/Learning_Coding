#include <iostream>
#include <vector>
using namespace std ;
void display(vector<int>&a){
    for(int i = 0; i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(32);
    v.push_back(566);
    v.push_back(765);
    v.push_back(234);
    v.push_back(324);
    v.push_back(7665);
    v.push_back(234);
    v.push_back(23414);
    int x,y;
    cout<<"Enter the Number which u want to Reverse : ";
    cin>>x>>y;
    // int x=0;                twesting this for driest run ever 
    // int y=v.size()-1;
    display(v);
    for(int i = x,j = y ;i<=j;i++,j--){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;

    }
    display(v);
return 0;
}