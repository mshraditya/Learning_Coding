#include <iostream>
using namespace std;
int main() {
    int arr[4][2];
    cout<<"Enter the roll number and marks of each student simultaneously by pressing enter"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}