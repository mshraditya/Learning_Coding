#include <iostream>
#include <vector>
using namespace std;
void sorting(vector<int>&a){
int i=0;
int j=a.size()-1;
while(i<j){
    if (a[i]>a[j]){
        i++;
        j--;
    }
    else if(a[i]<a[j]){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    else{
        a[i+1]=a[j];
    }
}
}
void Display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }

int main() {
     vector<int>v;
     v.push_back(35);    
     v.push_back(48);    
     v.push_back(8457);    
     v.push_back(-485);    
     v.push_back(335);    
     v.push_back(-98);    
     v.push_back(-12);    
     v.push_back(98);    
     v.push_back(-2);    
     v.push_back(-8);    
     v.push_back(4); 
        sorting(v);
        Display(v);
    return 0;
}