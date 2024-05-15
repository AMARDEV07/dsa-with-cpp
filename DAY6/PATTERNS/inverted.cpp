//    *
//   **
//  ***
// ****



#include<iostream>
using namespace std;
 int main(){

    int n=4;
    for(int i=1;i<=n;i++){

        //space n-1
        for( int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stare i
        for (int j=1;j<=i;j++){
            cout<<"*";

        } 
        cout<<endl;
      
        
    }
 }

