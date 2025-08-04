#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int> > grid;
     int rows=grid.size();
        int coln=grid[0].size();
        for(int i=0;i<rows;i++){
            if (grid[i][0]==0){
                for(int j=0;j<coln;j++){
                    if (grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            
            }
        }
        for (int j=0;j<coln;j++){
            int noo=0,noz=0;
            for(int i=0;i<rows;i++){
                if (grid[i][j]==0) noz++;
                else noo++;
            }
            if (noz>noo){
                for(int k=0;k<rows;k++){
                     if (grid[k][j]==0) grid[k][j]=1;
            else grid[k][j]=0;
                }
            }
        }
        int sum=0;
        for(int i =0;i<rows;i++){
            int x=1;
            for(int j=coln-1;j>=0;j--){
                sum+=grid[i][j]*x;
                x*=2;
            }

        }
        return sum;
            
    return 0;
}