


//pointer 
#include<iostream>
using namespace std;
int chnage(int*ptr){
    *ptr=7;
    cout<<*ptr;


}

 int main(){
    int a=8;
    chnage(&a);
    cout<<a;
return 0;
} 