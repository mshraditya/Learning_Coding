// 1.Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
// 2.Write a program to add two matrices and save the result in one of the given matrices.
#include <iostream>
using namespace std;
int main() {
    int arr[5][5];
    cout<<"Enter the digit you want to store in Every MATRiX";
    cin>>arr[0][0];
    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            arr[i][j]=arr[0][0];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}