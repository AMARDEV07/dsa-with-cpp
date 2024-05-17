#include<iostream>
using namespace std;
//  


// pass by value

 void valuepass(int n){
 n=20;
    cout<<n;
}

 void pointervalue(int*ptr){
    *ptr=7;
    cout<<"pointer"<<*ptr;

 }

  void reference( int &num){
    num=10;
    cout<<num;
  }

int main(){
    //value pass
    int n=10;
    valuepass(n);
    int a=10;
      cout<<n;
      //pointer reference

    pointervalue(&a);
    cout<< "pointer is"<<a;


    // reference variable
    int b=12;
    reference(b);
    cout<<endl<<b;
  
}

