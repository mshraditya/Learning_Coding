#include <iostream>
#include <vector>
using namespace std;
int main() {
    int rowIndex;
    cout<<"Enter the row index : "<<endl;
    cin>>rowIndex;
      vector<vector<int>> a;
        for(int i=1;i<=rowIndex+1;i++){
            vector<int>v(i);
            a.push_back(v);
        }
        for(int i=0;i<rowIndex+1;i++){
            for(int j=0;j<=i;j++){
                if(i==j || j==0){
                    a[i][j]=1;
                }
                else{
                    a[i][j]=a[i-1][j]+a[i-1][j-1];
                }
            }
        }
        vector<int>v;
         for(int i=0;i<rowIndex+1;i++){
            
                v.push_back(a[rowIndex][i]);
         }
         for(int num:v){
            cout<<num<<" ";
         }
    }
