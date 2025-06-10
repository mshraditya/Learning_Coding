#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter The Searching Number ";
    cin>>x;
    bool matching=false;
    for (int i=0;i<=n-1;i++){
        if(arr[i]==x){
            matching=true;
            break;
        }
         
    }
    if(matching==true){
        cout<<"number matched ";
    }
    else{
        cout<<"number not matched";
    }

            
            
       
            


 
}