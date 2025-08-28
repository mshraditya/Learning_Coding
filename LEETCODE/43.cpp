#include <iostream>
#include<vector>
#include <string>
using namespace std;
int main() {
    string s="1923737648574";
    string d="192373762348574";
   int m=d.size();
   vector<int>v2;
        for(int i=m-1;i>=0;i--){
                v2.push_back(d[i]);
        }
        


    return 0;
}