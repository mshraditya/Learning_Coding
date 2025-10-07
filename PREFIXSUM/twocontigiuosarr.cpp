#include <iostream>
using namespace std;
int main() {
    int arr[]={1, 1, 1, 1, 2, 2};
    for(int i=0;i<5;i++){
        arr[i+1]+=arr[i];
    }
    bool flag =true ;
    for(int i=0;i<6;i++){
         if(2*arr[i]==arr[6-1])   cout<<i;
        
    }
  

    
}