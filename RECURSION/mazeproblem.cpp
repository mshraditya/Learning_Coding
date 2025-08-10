#include <iostream>
using namespace std;
// int maze(int sr,int sc,int er,int ec,string s){
//     if (sr>er || sc>ec) return 0;
//     if (sr==er && sc==ec) {
//         cout<<s<<endl;
//         return 1;
//     }
// int downWard=maze(sr+1,sc,er,ec,s+'D');
// int RightWard=maze(sr,sc+1,er,ec,s+'R');
// return downWard+RightWard;
// }
int maze2(int er,int ec,string s){
    if (ec<1 || er<1) return 0;
    if (er==1 && ec==1) {
        cout<<s<<endl;
        return 1;
    }
    int leftWard=maze2(er,ec-1,s+'R');
    int upward=maze2(er-1,ec,s+'D');
return leftWard+upward;
}
int main() {
// cout<<maze(1,1,7,3,"");
 maze2(3,4,"");
    return 0;
}