//QUESTION IS FIND HOW MANY SEVEN PRESENT IN MATRIX;
//[4,7,8]
//[8,8,7]


#include<iostream>
using namespace std;
int count7s(int nums[][3],int n,int m,int value){

int countof7=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(nums[i][j]==value){
             countof7++;
        }
       
    }
    
}
cout<<countof7;
}

 int main(){
    int nums[2][3]={{4,7,8},{8,8,7}};
    int value;
    cout<<"enter no u want chek"<<endl;
    cin>>value;
    count7s(nums,2,3,value);
return 0;
}