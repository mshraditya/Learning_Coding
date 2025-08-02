#include <iostream>
using namespace std;
int main() {
    int arr[3][3]={
        {7, 2, 9},
        {4, 8, 1},
        {3, 68, 5}
    };
    int max=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"The largest No of the 2D-Array is "<<max<<endl;
    return 0;
}