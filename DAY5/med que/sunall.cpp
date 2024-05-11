#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
bool isprime=true;
for(int i=2;i<n-1;i++){
    if(n%2==0){
        cout<<"not prime";
        return 0;
    }
    else{
        cout<<"prime";
        return 1;
    }
}
 }