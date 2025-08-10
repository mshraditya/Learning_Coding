#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout<<" Enter the number: "<<endl;
    getline(cin,s);
    int p;
    try
    {
        p = stoi(s);
    }
    catch( invalid_argument& e)
    {
         return 0;
    }
    return p;
}