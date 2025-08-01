#include <iostream>
#include <vector>
using namespace std;
void trap(vector<int> &height){

}
int main() {
    vector<int>trap;
    trap.push_back(5);
    trap.push_back(1);
    trap.push_back(6);
    trap.push_back(2);    // ------->Expected Outcome 17
    trap.push_back(3);
    trap.push_back(0);
    trap.push_back(6);
    int  wall1=0;
    int container =0;
    int wall2=wall1+1;
    while(wall2<=trap.size()-1){

    while(trap[wall1]>=trap[wall2]){
        wall2++;
    }
    // cout<<"wall2 is"<<wall2<<endl;
    for(int i= wall1+1;i<wall2;i++){        // ye loop mai pani
        int water =0;                       //bhr rha hai 
        while( trap[wall1]>trap[i]){        //isliye yaha baar water 0 lena parega
        water++;
        trap[i]++;
    }
    cout<<"water is "<<water<<endl;
    container+=water;
   }
 wall1=wall2;
 wall2++;
}
//    cout<<container<<endl;
    return 0;
}