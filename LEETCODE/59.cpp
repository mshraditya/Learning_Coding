#include <iostream>
using namespace std;
int main() {
    int m;
    cout<<"Enter the No of Row of 1st Matrix: ";
    cin>>m;
     int matrix[m][m];
         
    int minr=0,minc=0;
    int maxr=m-1,maxc=m-1;
    int count=1;
   while (minr<=maxr && minc<=maxc) {
        //Loop required for Printing RIGHTward
        for(int i=minc;i<=maxc;i++){
            matrix[minr][i]=count;
            // cout<<matrix[minr][i]<<" ";
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //Loop require to Printing DOWNward 
        for(int j=minr;j<=maxr;j++){
            matrix[j][maxc]=count;
            // cout<<matrix[j][maxc]<<" ";
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //Loop required for Printing LEFTward 
        for(int k=maxc;k>=minc;k--){
            matrix[maxr][k]=count;
                // cout<<matrix[maxr][k]<<" ";
            count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //Loop required for Printing UPward
        for(int l=maxr;l>=minr;l--){
            matrix[l][minc]=count;
            // cout<<matrix[l][minc]<<" ";
            count++;
        }
        minc++;
    }
     for (int i=0;i<m;i++){
            for (int j=0;j<m;j++){
                    cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    

}