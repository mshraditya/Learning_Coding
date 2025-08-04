#include <iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter the No of Row of 1st Matrix: ";
    cin>>m;
    cout<<"Enter the No of Column of 1st Matrix: ";
    cin>>n;
     int arr1[m][n];
        cout<<"Enter The Element of 1st Matrix"<<endl;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                    cin>>arr1[i][j];       
        }
    }
    // For The case when Starts from 1 and end at 9.
    for (int j=0 ;j<n;j++){
       if(j%2==0){
        for(int i=0;i<m;i++){
            cout<<arr1[i][j]<<" ";
        }
       }
       else{
            for(int i=m-1;i>=0;i--){
            cout<<arr1[i][j]<<" ";
        }
       }
        
    }
    return 0;
}