#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
double power(double x,int n){
if (n==0) return 1; 
if (n<0) {
    x=1/x;
    n=-1*n;
}
return x*power(x,n-1);
}
int main() {
        double x;
        int n;
        auto start=high_resolution_clock::now();
        cout<<power(2,1)<<endl;
        auto end=high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);
        cout << "Time taken: " << duration.count() << " microseconds" << endl;
    return 0;
}