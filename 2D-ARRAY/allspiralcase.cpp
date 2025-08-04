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
    // for the case starts from 1 and ends at 9
     for (int i=0;i<m;i++){
        if(i%2==0){
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
    cout<<endl;
    // for the case starts from 3 and ends to 7
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=n-1;j>=0;j--){
               cout<<arr1[i][j]<<" ";
            }
        }
        else{
            for(int j=0;j<n;j++){
              cout<<arr1[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    // for the case starts from 7 and ends at 3 
    for(int i=m-1;i>=0;i--){
        if (i%2==0){
            for (int j=0;j<n;j++){
                cout<<arr1[i][j]<<" ";
            }
        }
        else {
            for (int j=n-1;j>=0;j--){
                cout<<arr1[i][j]<<" ";
            }
        }
    }
    cout<<endl;
    //for the case starts from 9 and ends at 1
    for (int i=m-1;i>=0;i--){
        if(i%2==0){
            for (int j=n-1;j>=0;j--){
                    cout<<arr1[i][j]<<" ";
            }
        }
        else{
            for (int j=0;j<n;j++){
                cout<<arr1[i][j]<<" ";
            }
        }
    }
    
    return 0;
}
