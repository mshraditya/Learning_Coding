#include <iostream>
#include <climits>
using namespace std;
void sum(int arr[],int size){
    int add=0;
    for(int i =0; i<=size-1;i++){
        add+=arr[i];

    }
    cout<<add;

}
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/4;

    sum(arr, size);

}