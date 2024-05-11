#include<iostream>
using namespace std;
 int main(){
    int n= 10489;
    int sum=0;

    while(n>0){
       int lastdig=n%10;
      
       if(lastdig%2==1){
        sum=sum+lastdig;
        
       }
        n=n/10;

    }
    cout<<sum;

   
 
   }
     
   



    
    
