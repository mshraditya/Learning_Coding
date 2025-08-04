#include <iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter the No of Row of 1st Matrix: ";
    cin>>m;
    cout<<"Enter the No of Column of 1st Matrix: ";
    cin>>n;
    int p,q;
    cout<<"Enter the No of Row of 2nd Matrix: ";
    cin>>p;
    cout<<"Enter the No of Column of 2nd Matrix: ";
    cin>>q;
    if(n==p){
        int arr1[m][n];
        cout<<"Enter The Element of 1st Matrix"<<endl;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                    cin>>arr1[i][j];
            }
        }
        int arr2[p][q];
        cout<<"Enter The Element of 2nd Matrix"<<endl;
        for (int i=0;i<p;i++){
            for (int j=0;j<q;j++){
                    cin>>arr2[i][j];
            }
        }
        cout<<"The Multiplication of The Matrix is "<<endl;
        int arr3[m][q];
        for (int k =0;k<m;k++){
            for(int l=0;l<q;l++){
             arr3[k][l]=0;// = arr1[i][0]*arr2[0][j]
                for(int r=0;r<p;r++){
                    arr3[k][l]+=arr1[k][r]*arr2[r][l];
                }
            }

        }
        for (int i=0;i<m;i++){
            for (int j=0;j<q;j++){
                    cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{  // (n!=p) wala condition is matching here
        cout<<"The Matrix cannot be Multiplied ";
    }

    return 0;
}