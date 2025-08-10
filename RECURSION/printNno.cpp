#include <iostream>
using namespace std;
// void Number(int n){
//     if(n==0){
//      return;
//           }
//           cout<<n;
//           Number(n-1);

// }
void Number(int n){
   if(n==0) return
    Number(n-1);
    cout<<n<<endl;
}
void print(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);

}
int main() {
    int n;
    cout<<"Enter The Number : ";
    cin>>n;
   Number(n);
    print(1,n);
    return 0;
}