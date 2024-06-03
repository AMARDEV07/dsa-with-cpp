//in givw question we solve to transpose matrix means [2,3,4]
                                                    // [5,6,7]  in {2,5}
                                                                //  {3,6}
                                                                //   {4,7}  2*3 convert in 3*2;





#include<iostream>
using namespace std;
#define n 3

void transpse(int mat[][n],int mat2[][n]){
    
  
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mat2[i][j]=mat[j][i];
        }
         
    }
 

}
void print(int mat[][n] ,int mat2[][n]){
   
    for(int i=0;i<n;i++){
        cout<<endl;
        for( int j=0;j<n;j++)
            cout<<mat2[i][j];
        }
    }

 int main(){
   
    int mat[n][n]={{1,2,3},{4,5,6}};
    int mat2[n][n],i,j;
    transpse(mat,mat2);
    print(mat,mat2);
return 0;
}


//method 2.... 



#include<iostream>
using namespace std;
#define n 3
void transpse(int mat[][n]){
  
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
           cout<<endl;
    }
 

}
void print(int mat[][n]){
   
    for(int i=0;i<n;i++){
        cout<<endl;
        for( int j=0;j<n;j++)
            cout<<mat[i][j];
        }
    }

 int main(){
   
    int mat[n][n]={{1,2,3},{4,5,6}};
    transpse(mat);
    print(mat);
return 0;
}