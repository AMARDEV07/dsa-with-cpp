#include<iostream>
using namespace std;

bool even(int n){
    if(n%2==0){
      
      return true;
    }
    else{
       return false;
    }
   

}
 int main(){
    int n;
    cin>>n;
  cout<<even(n);
return 0;

}