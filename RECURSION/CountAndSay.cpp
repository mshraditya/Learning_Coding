#include <iostream>
using namespace std;
string countAndSay(int n ){
    if (n==1) return "1";
        string s=countAndSay(n-1);//3322251---->23321511
        int count=1;
         char say=s[0];
        string w="";
        int p=0;
            for(int i=1;i<s.size()-1;i++){
                 char ch=s[i];
                 if(say==ch){
                        count++;
                 }

                 else{
                        w+=(to_string(count)+say);
                        count=1;
                        say=s[i];

                 }
            }
            return w;
   
}
int main() {
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    countAndSay(n);
    return 0;
}




  // if(s[i]==s[i+1]){
                //     count++;
                //     say=s[i];
                // }
                //     w[p]=count;
                //     p++;
                //     w[p]=say;
                //     p++;
                //     count=1;