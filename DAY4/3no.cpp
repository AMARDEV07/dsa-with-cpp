// take three input a,b ,c and find which is greatest no;



#include<iostream>
using namespace std;
 int main()
{

    int a,b,c;
    cout<<"enter value of a:"<<endl<<"enter value of b:"<<endl<<"enter value of c:"<<endl;
    cin>>a>>b>>c;


    if((a>=b)&&(a>=c)){
        cout<<"a is greatest"<<endl;

    }


    else if( (b>=c)&&(c>=a)){
        cout<<"b i greatst"<<endl;

    }
    else{
        cout<<"c is greatest"<<endl;
    }
return 0;
}