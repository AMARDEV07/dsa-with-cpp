#include<iostream>
using namespace std;



void binarDec(int binary){
    int n=binary; // it is use for storing value of change in n;taki hm isuse kr paya
    int decnum=0; //all changes store in 
    int power=1;//inislised

    while(n>0){
        int lastDig=n%10;///use for acess last value or;
        decnum+=lastDig*power; //it is power log 10^2 give value poewr
        power=power*2;

        n=n/10;
        //acess
    }

    cout<<decnum;

}

// --------------------------------------------------------------------------------------------------------------------
void dectonbin(int decimal){
    int n=decimal;  
    int pow=1;
    int binaryNum=0;

    while(n>0){
        int rem=n%2; //no ha usa dive kra ha reminder la liya 
        binaryNum+=rem*pow;//jo riminder honga una power sa into kr do
        pow=pow*10; //power hogi 10 sa satrt hogi
        n=n/2; 
    }

    cout<<binaryNum;

}
 int main(){
    binarDec(101);
    dectonbin(5);
return 0;
}