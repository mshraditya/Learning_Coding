#include <iostream>
using namespace std;
int main() {
     int m;
     cout<<"Enter the Number of ROW or COLUMN of Square matrix";
     cin>>m;
     int arr[m][m];
     for (int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
     }
     if(m%2!=0){
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                 if(i+j==m-1 || i==j){
                cout<<arr[i][j]<<" ";
                }
                else{
                cout<<" ";
                }
            }
            cout<<endl;
        }
     }
     else {
        cout<<"Enter the Valid MATRIX with ODD number of Row or Column";
     }
    return 0;
}