#include <iostream>
using namespace std;
void call(int k){
    if(k==0) return;
    cout<<k<<" "; //pre
    call(k-1);   
    cout<<k<<" ";   //in
    call(k-1);  
    cout<<k<<" ";   //post
   


}
int main() {
    call(3);
    return 0;
}