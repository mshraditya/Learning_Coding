#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m,n;
    cout<<"enter size of fruit ";
    cin>>n;
    vector<int>fruit(n);
    vector<int>basket(n);
for(int i=0;i<n;i++){
    cin>>fruit[i];
}
for(int i=0;i<n;i++){
    cin>>basket[i];
}
int NoOfUnplacedFruit=0;
int palcedcount=0;
int i=0;
int j=0;
while(i<n){
    if(j == n) {
        i++;
        j = 0;
        continue;
    }
    if(basket[j]>=fruit[i]){
        basket[j]=0;
        palcedcount++;
        i++;
        j=0;
    }
    else {
    j++;
    }

 }

 NoOfUnplacedFruit=n-palcedcount;
cout<<NoOfUnplacedFruit;

    return 0;
}