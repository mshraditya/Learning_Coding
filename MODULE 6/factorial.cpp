#include <iostream>
using namespace std;
int main(){
    long long n;
    cout<<"the factorial"<<endl;
    cin>>n;
    long long factorial=1;
    for(int i =1 ; i<=n;i++){
        factorial*=i;
    }
    cout<<factorial;
}