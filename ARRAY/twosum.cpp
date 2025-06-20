#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of Element of Vector "<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter The Elements of Vector ";
    for (int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the Number whose two sum you want : ";
    cin>>x;
    bool found= false;
     int I ,J;
    for(int i =0 ;i<v.size();i++){
        for(int j =0 ;j<v.size();j++){
            if(v[i]+v[j]==x) {
                found=true;
                I=v[i];
                J=v[j];
                }
        }
        
    }
    if (found==true){
        cout<<I<<" "<<J<<" is the two sum";
    } 
    else {
        cout<<"Doublet NOT found ";
    }
        return 0;
}
