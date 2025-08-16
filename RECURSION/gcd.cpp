#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
void HCF(int a ,int b){
    if(b%a==0) {
        cout<<a;
        return ;
    }
    HCF(b%a,a);
}
int main() {
    int a;
    int b;
    cout<<"Enter the number A and B ";
    cin>>a>>b;
    auto start=high_resolution_clock::now();
    HCF(a,b); 
    cout<<endl;   //b>a is the basic condition 
    auto end=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(end-start);
cout<<duration.count()<<" microseconds ";

    return 0;
}