 #include <iostream>
 using namespace std;
 int factorial(int n){
    int factorial=1;
    for(int i =1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
 }
 int main(){
    int n;
        cout<<"Enter the number N"<<endl;
        cin>>n;
        for(int i = 1 ;i<=n;i++){
            cout<<factorial(i)<<endl;
        }

    }