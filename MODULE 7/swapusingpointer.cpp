#include <iostream>
using namespace std ;
void swap(int* x,int* y){
 int temp =*x;
    *x=*y;
    *y=temp;
    return;

}
int main (){
int a,b;
    cout<<"Enter The First Number : "<<endl;
    cin>>a;
    cout<<"Enter The Second Number : "<<endl;
    cin>>b;
    swap(&a,&b); // Function to swap two number 
    cout<<a<<" "<<b<<endl; // since function swap() is called in 16th line there swapped value will be printed

}