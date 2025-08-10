#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void MaxinArray( int array[],int n,int indx,int max){
    if(indx==n) {
        cout<<max;
        return ;
    }
    if (max<array[indx]) max=array[indx];
     MaxinArray(array, n, indx+1,max);
}
int main() {
    int array[]={23,45,2,34,44,13,41232,23,19999321,213213};
    int n=sizeof(array)/sizeof(array[0]);
    MaxinArray(array,n,0,INT_MIN);
    return 0;

    
}