#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Vector: ";
    cin>>n;
    vector<int>vec(n);
    cout<<"Enter the Elements of Vector: ";
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    int x;
    cout<<"Enter the Elements whose INDEX you want : ";
    cin>>x;
    bool flag=false;
    int p;
    for (int i= 0 ;i<vec.size();i++){
        if(vec[i]==x){
         flag=true;
         p=i;
         break;
        }
    
    }
    if(flag==true)
    cout<<"matching with the elements of Index "<<p;
    else{
        cout<<"not matching with the elements";

    }

}