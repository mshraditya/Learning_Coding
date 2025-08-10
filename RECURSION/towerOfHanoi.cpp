#include <iostream>
#include <string>
#include <chrono>
using namespace std;
using namespace std::chrono;
void towerOfHanoi(int n,char A,char B,char C ){
    if (n==0) return ;
towerOfHanoi(n-1,A,C,B);
cout<<A<<"---->"<<C<<endl;
towerOfHanoi(n-1,B,A,C);
}
int main() {
    int n;
    cout<<"Enter The Number Of Disc: ";
    cin>>n;
    auto start=high_resolution_clock::now();
    towerOfHanoi(n,'A','B','C');
        auto end=high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end-start);
        cout<<"Time Required is "<<duration.count()<<" microsec ";

    return 0;
}