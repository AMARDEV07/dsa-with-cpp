#include<iostream>
using namespace std;

// int oddEven(int n){
//     if(n%2==0){
//       cout<<"even";

//     }
//     else{
//        cout<<"odd";
//     }
// }
//  int main()
// {
//     int n;
//     cin>>n;
//     oddEven(n);

// method 2:
  
//     int a;
    
//     cin>>a;


//    if(a%2==0){
//     cout<<"even";
//    }
//    else{
//     cout<<"odd";
//    }



// ex3
int iseven(int n){
    return n%2==0;
}


int main(){
    int n;
    
    cout<<"enter value of n"<<endl;
    cin>>n;
    
    if(iseven(n)){
        cout<<"even";

    }
    else{
        cout<<"odd";
    }


}