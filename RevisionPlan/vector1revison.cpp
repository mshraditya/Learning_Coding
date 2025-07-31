#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>Vect1;
    Vect1.push_back(15);        // 0
    Vect1.push_back(1);         // 1
    Vect1.push_back(123);       // 2
    Vect1.push_back(133);       // 3
    Vect1.push_back(133);       // 4
    Vect1.push_back(133);       // 5
    Vect1.push_back(133);       // 6 
    Vect1.push_back(163);       // 7
    Vect1.push_back(1421);      // 8
    Vect1.push_back(1421);      // 9
    Vect1.push_back(1421);      // 10
    Vect1.push_back(9999);      // 11
    vector<int>NewVect1;
    vector<int> nums = {2, 4,3, 6, 8, 10};
    // for(int i=0;i<Vect1.size();i++){
    //    if(i==0 || Vect1[i]!=Vect1[i-1]){
    //      NewVect1.push_back(Vect1[i]);
    //    }
        
    // }
    // for( int print : NewVect1){
    //     cout<<print<<endl;
    // }
    for (int &print :nums){
        print*=5;
    }
    for (int newprint :nums){
       cout<<newprint<<endl;
    }
    

    

    return 0;
}