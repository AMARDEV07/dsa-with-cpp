#include<iostream>
using namespace std;


int sumog(int n){
   int sum=0;
    while(n>0){
        int lastidg=n%10;
              sum=sum+lastidg;
        n=n/10;
  

        
    }

    return sum;
}

int main(){
    cout<<sumog(78);
    
}