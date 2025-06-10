#include <iostream>
using namespace std ;
int arr[10]={10,31,56,64,23,56,67,24,7,73};
int main (){
    for (int i=0;i<=9;i++){
        if(arr[i]<35){
            cout<<i<<endl;
        }
    }
    cout<<" hi "<<endl;
cout<<sizeof(arr)/sizeof(arr[9]);
}