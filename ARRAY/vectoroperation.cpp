#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main() {
vector <int> numb;
numb.push_back(1);
numb.push_back(2);
numb.push_back(1);
numb.push_back(1);
numb.push_back(1);   //--------> puhback is used to insert
numb.push_back(1);  //             elements in the vector 
numb.push_back(4);
numb.push_back(4);
numb.push_back(0);
numb.push_back(1);
// numbpop_back();
// numbpop_back();
// numbpop_back(); //-----------> pop back is used to delete the elements in the vector 
// numbpop_back();
// numbpop_back();
// numbpop_back();
numb.size();  //-----------> used to get the size of the vector
numb.capacity();//---------->used to get the capacity of the vector 
cout<<numb.at(8)<<endl;
sort(numb.begin(),numb.end());
for(int i = 0 ;i<numb.size();i++){
    cout<<numb[i]<<endl;
}
}