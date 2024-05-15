#include<iostream>
using namespace std;
int isprime( int n){
    if(n==1){
        return false;

    }
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }


    }

}
void printprime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<endl ;
        }


    }
    cout<<endl;

}
 int main(){
    int n;
    printprime(20);
return 0;

}