#include<iostream>
using namespace std;
 int main(){
    int n=1234;
    while(n>0){
        int lastdig=n%10;
        n=n/10;
        cout<<lastdig;


    }
return 0;
}