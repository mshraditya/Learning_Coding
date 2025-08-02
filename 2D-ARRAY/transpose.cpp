#include <iostream>
using namespace std;
int main() {
    int arr1[3][3] = {
        {4, 7, 2},
        {8, 1, 5},
        {3, 6, 9}
    };
    cout<<"The transpose of the matrix "<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<" is "<<endl;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}