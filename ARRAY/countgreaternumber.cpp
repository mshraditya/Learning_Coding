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
    cout<<"enter the number which u want to check "<<endl;
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(x<arr[i]){
            count++;
        }
    }
    cout<<"number of element  greater than "<<x<<" is "<<count<<endl;
}
