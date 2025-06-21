#include <iostream>
using namespace std;
    class books{
        public:
        char name;
        int price ;
        int NoOfPages;

        int CountBook(int P){
            if (P>price) return 0;
            else return 1;
        }
         
        bool isBookPresent(char n ){
            if(n==name) return true;
            else return false ;
        }

    };
    int main (){
         books ThinkAndGrowRich;
         ThinkAndGrowRich.name='T';
         ThinkAndGrowRich.NoOfPages=331;
         ThinkAndGrowRich.price=175;

         cout<<ThinkAndGrowRich.CountBook(900)<<endl;
         cout<<ThinkAndGrowRich.isBookPresent('T');
    return 0;
}