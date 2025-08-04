#include <iostream>
#include <string>
using namespace std;
int main() {
    string st;
    cout<<"Enter the Sentence :";
    getline(cin,st); // used to take input where there is senteces with space
    int NoOfVovel=0; // as because when we use spaces with cin we complete the input
    for (int i=0;st[i]!='\0';i++){
       if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'){
        NoOfVovel++;
       }

    }
    cout<<NoOfVovel;
    return 0;
}