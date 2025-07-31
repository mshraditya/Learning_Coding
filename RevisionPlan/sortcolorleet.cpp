#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<int>sorting;
    sorting.push_back(2);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(2);
    sorting.push_back(2);
    sorting.push_back(1);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(1);
    sorting.push_back(2);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(0);
    sorting.push_back(2);
    int NoofZeroes=0;
    int NoofOnes=0;
    int NoofTwos=0;
    for(int i=0;i<sorting.size();i++){
        if (sorting[i]==0){
            NoofZeroes++;
        }
      else  if (sorting[i]==1){
            NoofOnes++;
        }
        else NoofTwos++;
    }
    cout<<NoofZeroes<<" "<<NoofTwos<<" "<<NoofOnes<<endl;
    for(int i=0;i<NoofZeroes;i++){
        sorting[i]=0;
    }
    for(int i=NoofZeroes;i<NoofOnes+NoofZeroes;i++){
        sorting[i]=1;
    }
    for(int i=NoofOnes+NoofZeroes;i<NoofTwos+NoofOnes+NoofZeroes;i++){
        sorting[i]=2;
    }
    for(int sorted:sorting){
        cout<<sorted<<" ";
    }

    return 0;
}