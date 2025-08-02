#include <iostream>
using namespace std;
int main() {
     int arr1[3][3] = {
         {4, 7, 2},
        {8, 1, 5},
        {3, 6, 9}
    };
    int m =3;
    int n=3;
    for(int i =0;i<m/2;i++){
        for(int j=0;j<n;j++){
            int temp = arr1[i][j];
            arr1[i][j]=arr1[m-1-i][j];
            arr1[m-1-i][j]=temp;
        }
    }
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}