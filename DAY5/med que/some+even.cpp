


//1  print all natural no then find sum of even no.
#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"ente the value of n";
    cin>>n;
    int i=1;
    int sum=0;
   while(i<=n)
{
    cout<<"all antural no is"<<i<<endl;
    i++;
    
    if(i%2==0){
        sum=sum+i;
    }

} 
cout<<"sum of even is"<<sum<<endl;;  
   
return 0;
}