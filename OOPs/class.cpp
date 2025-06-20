#include <iostream>
using namespace std;
class reportcard{
    private:
    int physics ;
    int chemistry;
    int math;
    int english;
    public:
    void setscorePhy(int p){
        physics = p;
    }
    void setscoreChem(int c){
        chemistry = c;
    }
    void setscoreMath(int m){
        math =m;
    }
    void setscoreEng(int e){
        english = e;
    }
         
    int getscorePhy(){
     return physics;

    }
    int getscoreMath(){
        return math;
         

    }
    int getscoreChem(){
         return chemistry;

    }
    int getscoreEng(){
      return english;

    }
    
};
int main(){
    reportcard Aditya;
    Aditya.setscorePhy(89);
    Aditya.setscoreMath(92);
    Aditya.setscoreEng(87);
    Aditya.setscoreChem(62);
    cout<<Aditya.getscoreChem()<<endl;
    cout<<Aditya.getscoreEng()<<endl;
    cout<<Aditya.getscoreMath()<<endl;
    cout<<Aditya.getscorePhy()<<endl;


}