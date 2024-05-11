//questio is print sun oof aall digit 
// n=1789



#include<iostream>
using namespace std;
 int main(){

   int n;
   int sum=0;
   cout<<"enter the value of n"<<endl;
    cin>>n;

while(n>0){
    int lastdigi  =n%10;    //it is sperate last digit for words means if u have 1345 the it seprate 5;
    n=n/10;     // it use to remove ur seprete digit.
    sum=sum+lastdigi; // it use to sum ur seprate last digit.
}

cout<<sum;
return 0;
}