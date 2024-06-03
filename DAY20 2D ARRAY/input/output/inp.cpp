#include<iostream>
using namespace std;
 int main(){
    int arr[4][3];
    int n=4,m=3;
    for(int i=0;i<n;i++)//traerse for row;
    {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];//input
        }
    }
      for(int i=0;i<n;i++)//traerse for row;
    {
        for(int j=0;j<m;j++){//traverse col
            cout<<arr[i][j];//cout output
        }
        cout<<endl;
    }
return 0;
}