//reference varible.cpp

#include<iostream>


using namespace std;
int change( int &num){
    num=20;
    cout<<num;

}
 int main(){
    int a=10;
    change(a);
    cout<<a;
return 0;
}