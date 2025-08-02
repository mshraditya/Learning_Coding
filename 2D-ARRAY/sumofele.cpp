#include <iostream>
using namespace std;
int main() {
    int arr[3][3]={
        {7, 2, 9},
        {4, 8, 1},
        {3, 6, 5}
    };
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             sum+=arr[i][j];
        }
    }
    cout<<"sum of the element is "<<sum;
    return 0;
}