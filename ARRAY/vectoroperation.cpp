#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main() {
vector <int> v;
v.push_back(1);
v.push_back(2);
v.push_back(1);
v.push_back(1);
v.push_back(1);   //--------> puhback is used to insert
v.push_back(1);  //             elements in the vector 
v.push_back(4);
v.push_back(4);
v.push_back(0);
v.push_back(1);
// v.pop_back();
// v.pop_back();
// v.pop_back(); //-----------> pop back is used to delete the elements in the vector 
// v.pop_back();
// v.pop_back();
// v.pop_back();
v.size();  //-----------> used to get the size of the vector
v.capacity();//---------->used to get the capacity of the vector 
cout<<v.at(8)<<endl;
sort(v.begin(),v.end());
for(int i = 0 ;i<v.size();i++){
    cout<<v[i]<<endl;
}
}