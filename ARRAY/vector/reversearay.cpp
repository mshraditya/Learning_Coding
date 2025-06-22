#include <iostream>
#include <vector>
using namespace std ;
void display(vector <int>&a){
    for(int i = 0 ; i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){ 
    vector<int>v;
    v.push_back(5);
    v.push_back(42);
    v.push_back(46);
    v.push_back(345);
    v.push_back(76);
    display(v);
    cout<<endl;
    int i = 0;
    int j = v.size()-1;
    for (i=0,j=v.size()-1;i<=j;i++,j--){
    int temp;
    temp=v[i];
    v[i]=v[j];
   v[j]=temp;
 }
    display(v);
return 0;
}