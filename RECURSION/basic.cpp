#include <iostream>
using namespace std;
void greet(int n){
    cout<<"Good Morning !!!!!!"<<endl;
    greet(n-1);
}
int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    greet(n);
    return 0;
}