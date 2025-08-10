#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string s;
    cout<<" Enter the Sentece : "<<endl;
    getline(cin,s);
    vector<string>vec;
    stringstream v(s);
    string temp;
    while(v>>temp){
        vec.push_back(temp);
    }
    // for(string pompom:vec){
    //     cout<<pompom<<" ";      // range based vector printing 
        
    // }
    sort(vec.begin(),vec.end());
    int maxcount=0;
    int count=0;
    int tracker;
    for(int i=1;i<vec.size();i++){
        if(vec[i]==vec[i-1]) {
            count++;
            if(count>maxcount){
                maxcount=count;
                tracker=i;
            }
            else {
                count=1;
            }
        }
    }
    cout<<"'"<<vec[tracker]<<" is repeating maximum time that is "<<maxcount;
    return 0;
}