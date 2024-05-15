#include<iostream>
using namespace std;

    void binaryToDecimal(int binary){
        int n=binary;
        int decimal=0;
        int pow=1;
        while(n>0){
            int lastvalue=n%10;
            decimal+=pow*lastvalue;
            pow=pow*2;
            n=n/10;
        }
        cout<<"decimal value is "<<decimal;

    }
     int main(){
binaryToDecimal(10110);
binaryToDecimal(10111);
binaryToDecimal(10011);
binaryToDecimal(110010);


return 0;
}


//logic is first
//acess last value of digit  by int last digit=n%10;
//thene multiply last value with power =power*lastdig;
//power*2;
//tehn remove last digitl  n=n/10;