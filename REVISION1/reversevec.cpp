#include <iostream>
#include <vector>
using namespace std;
void Rotate(){

}
int main() {
    vector<int>vec1;
    vector<int>vec2;
    vec1.push_back(1);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(1);
    vec1.push_back(9);
    vec1.push_back(0);
    for (int print : vec1){
        cout<<print<<" "; 
    }
    cout<<endl;
    for(int i=0;i<vec1.size();i++){
        vec2.push_back(vec1[vec1.size()-i-1]);
    }
    for (int print : vec2){
        cout<<print<<" "; 
    }



    return 0;
}
