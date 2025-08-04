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
    for (int i=m-1;i>=0;i--){
        if(i%2!=0){
           for (int j=0;j<n;j++){
        cout<<arr1[i][j]<<" ";
       }
    }
       else {
           for(int j=n-1;j>=0;j--){
               cout<<arr1[i][j]<<" ";
            }
        }
    }
    return 0;
}
