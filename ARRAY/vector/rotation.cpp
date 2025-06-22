 #include <iostream>
 #include <vector>
 using namespace std;
 void Reverse(int x,int y,vector<int>&a){
 for(int i = x,j = y ;i<=j;i++,j--){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
 }
 
void Display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }
 int main() {
    vector <int> v;
    v.push_back(8);
    v.push_back(6);
    v.push_back(7);
    v.push_back(0);
    v.push_back(4);
    v.push_back(93);
    v.push_back(10);
    v.push_back(37);
    int x;
    cout<<"Enter the number of Element which u Want to rotate : ";
    cin>>x;
    if(x>v.size())  {
       x%=v.size();
        
    }
    Display(v);
    Reverse(0,v.size()-1-x,v);
    Reverse(v.size()-x,v.size()-1,v);
    Reverse(0,v.size()-1,v);
    Display(v);
     return 0;
 }
 