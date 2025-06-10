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
    int max=arr[0];
for(int i =1;i<=n-1;i++){
    if(max<arr[i]) {
        max=arr[i];
    
    }

}
cout<<"The Maximum Value of the ARRAY is "<<max<<endl;


}