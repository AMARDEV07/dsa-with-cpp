#include<iostream>
using namespace std;



void decTobin( int decmial){
    int n=decmial;
    int binary=0;
    int pow=1;


    while(n>0){

        int rem=n%2;
        binary+=rem*pow;
        pow=pow*10;
        n=n/2;
    }
    cout<<"binary no is"<<binary;

}
 int main(){
    decTobin(25);
    decTobin(49);

return 0;
}




// logic
//  find reminder using n%2;
//  the rem*power;
//  or then afer rem multiply 
//  powwer multiply by 10
//  then n=n/2;  

