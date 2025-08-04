#include <iostream>
using namespace std;
int main() {
    int m,n;
    cout<<"Enter the No of Row of 1st Matrix: ";
    cin>>m;
    cout<<"Enter the No of Column of 1st Matrix: ";
    cin>>n;
     int matrix[m][n];
        cout<<"Enter The Element of 1st Matrix"<<endl;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                    cin>>matrix[i][j];
        }
    }
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
   while (minr<=maxr && minc<=maxc) {
        //Loop required for Printing RIGHTward
        for(int i=minc;i<=maxc;i++){
            cout<<matrix[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //Loop require to Printing DOWNward 
        for(int j=minr;j<=maxr;j++){
            cout<<matrix[j][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //Loop required for Printing LEFTward 
        for(int k=maxc;k>=minc;k--){
            cout<<matrix[maxr][k]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //Loop required for Printing UPward
        for(int l=maxr;l>=minr;l--){
            cout<<matrix[l][minc]<<" ";
        }
        minc++;
    }
    

}