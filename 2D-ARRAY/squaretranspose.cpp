#include <iostream>
using namespace std;
int main() {
    int arr[4][4]={
    {7, 2, 9, 4},
    {5, 1, 8, 3},
    {6, 0, 12, 10},
    {11, 14, 13, 15}
    };
    for (int i =0;i<4;i++){
        for(int j=0;j<i;j++){
            
                int temp;
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
        }
    }
    for (int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}