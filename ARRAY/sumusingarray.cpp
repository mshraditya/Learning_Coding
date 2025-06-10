#include <iostream>
using namespace std;
int arr[10]={4,24,567,2456,2345,765,765,234,876,34};
int main(){
    int sum=0;
    for (int i=0;i<=9;i++){
        sum+=arr[i];
    }
    cout<<sum;
}
