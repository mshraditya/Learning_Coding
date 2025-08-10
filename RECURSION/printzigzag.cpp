#include <iostream>
using namespace std;
void zigzag(int n){
    if (n==0) return ;
    cout<<n<<" ";      // pre
    zigzag(n-1);
    cout<<n<<" ";     // in 
    zigzag(n-1); 
    cout<<n<<" ";    // post

}
int main() {
    zigzag(4);
    return 0;
}