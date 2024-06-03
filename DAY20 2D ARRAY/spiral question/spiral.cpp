#include<iostream>
using namespace std;
     void spiralmaxtirx(int matrix[][4],int n,int m){
        int srow=0,scol=0;
      int erow=n-1,ecol=m-1;


        while((srow<=erow)&&(scol<=ecol)){

            //top

            for(int i=scol;i<=ecol;i++){
                cout<<matrix[srow][i]<<" ";

            }
            //right
             for(int j=srow+1;j<=erow;j++){
                cout<<matrix[j][ecol]<<" ";
                
            }
            //bottom
             for(int i=ecol-1;i>=scol;i--){
                if(srow==erow){//use for stope dublicate
                    break;
                }
                cout<<matrix[erow][i]<<" ";
                
            }
            //left
             for(int j=erow-1;j>=srow+1;j--){
                if(scol==ecol){
                    break;
                }
                cout<<matrix[j][scol]<<" ";
                
            }
            srow++;scol++;
            erow--;ecol--;
           


        }
       

     };
 int main(){
    int matrix[4][4]={{1,2,3,4}
                     ,{5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16}};
    spiralmaxtirx(matrix,4,4);
return 0;
}
