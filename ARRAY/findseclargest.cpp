#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    int secMax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(secMax<arr[i] && arr[i]!=max){
            secMax=arr[i];
        }
    }
    cout<<"Second largest number is "<<secMax<<endl;

}
