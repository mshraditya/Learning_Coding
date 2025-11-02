#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>vect1;
    vector<int>vect2;
    vector<int>vect3;
    vect1.push_back(1);
    vect1.push_back(5);
    vect1.push_back(8);
    vect1.push_back(12);            // size is 5
    vect1.push_back(17);
    vect2.push_back(1);
    vect2.push_back(3);
    vect2.push_back(4);
    vect2.push_back(6);              // size is 6
    vect2.push_back(8);
    vect2.push_back(20);
    int n=vect1.size();
    int m=vect2.size();
    int i=0,j=0;
    while(i<n && j<m){
        if (vect2[j]>vect1[i]){
            vect3.push_back(vect1[i]);
            i++;
        }
       else  {
            vect3.push_back(vect2[j]);
            j++;
        }
    }
        if (i==n){ // vect1 ke sare element khatam ho gaya
          while (j<m)
          {
            vect3.push_back(vect2[j]);
            j++;
          }
          
        }
        if (j==m){          // vector 2 ke sare element kahatm ho gaye
            while (i<n){
                vect3.push_back(vect1[i]);
                i++;
            }
        }
    cout<<vect3.size()<<endl;
    for(int shortedandmerged:vect3){
        cout<<shortedandmerged<<" ";
    }
    cout<<endl;
    cout<<"The reverse of the vector ";
    reverse(vect3.begin()+2,vect3.end());
    for(int shortedandmerged:vect3){
        cout<<shortedandmerged<<" ";
    }
    cout<<endl;
    cout<<"the shorted vector ";
    sort(vect3.begin(),vect3.end());
    for(int shortedandmerged:vect3){
        cout<<shortedandmerged<<" ";
    }

    


    return 0;
}