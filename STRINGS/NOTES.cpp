#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    // string st;
    // cout<<"Enter the Sentence :";
    // getline(cin,st); // used to take input where there is senteces with space
    // int NoOfVovel=0; // as because when we use spaces with cin we complete the input
    // for (int i=0;st[i]!='\0';i++){
    //    if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'){
    //     NoOfVovel++;
    //    }

    // }
    // substring 
    // bich ka kahi se kahi tk agr likhna ho toh substring use krte hai 
    //syntax of substring 
    // s.substr(index,length)
    //note****** we can only print substring from left to right 
    // if length is not inserted then we will get all  the length
    //from that index
    // STRING STREAM
// string stream is used to make individual substring after from string 
// which have lots of space 
// header file will be -----> #include <sstream>
// and then follow below 
string s = "hey there this is Aditya Mishra";
stringstream printer(s);
string temp;
while ( printer>>temp){
     
}
cout<<temp.size();
// ^ above is the syntax of string stream 
    return 0;
}