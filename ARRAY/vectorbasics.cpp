#include <iostream>
#include <vector>
using namespace std ;
int main() {
    vector<int>vec;
    vec.push_back(8);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    
    vec.push_back(3);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(4);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(3);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(0);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(0);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(6);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(8);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(4);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    vec.push_back(6);
    cout<<vec.capacity()<<" capacity ";
    cout<<vec.size()<<" size "<<endl;
    cout<<vec[0]<<" ";
    cout<<vec[1]<<" ";
    cout<<vec[2]<<" ";
    cout<<vec[3]<<" ";
    cout<<vec[4]<<" ";
    cout<<vec[5]<<" ";
    cout<<vec[6]<<" ";
    cout<<vec[7]<<" ";
    cout<<vec[8]<<" ";
    cout<<vec[9]<<" ";

}