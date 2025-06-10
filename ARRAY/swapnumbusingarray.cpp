#include <iostream>
using namespace std;
int arr[2];
int main(){
    for(int i=0;i<=1;i++){
        cin>>arr[i];
    }
    for (int i=1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}