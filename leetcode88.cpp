#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(43);
    v1.push_back(543);
    v1.push_back(21);
    v1.push_back(123);
    v1.push_back(5432);
    v2.push_back(5432);
    v2.push_back(123);
    v2.push_back(21);
    v2.push_back(543);
    v2.push_back(43);
    v2.push_back(1);
    int m=v1.size();
    int n=v2.size();
cout<<v1.size()<<" "<<v2.size()<<endl;
    for(int i=0;i<m+n;i++){
            if(i<m-1){
                cout<<endl;
                v1.push_back(v2[i-n]);
            }
        }
        for(int i =0;i<v1.size();i++){
            cout<<v1[i]<<" ";
            
        }
    }

