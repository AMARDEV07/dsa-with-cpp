//AVERAGE OF 3 SUB MARKS;
//ENGLISH,HINDI,MATHS;
//S1+S2+S3/3;

#include<iostream>
using namespace std;




int main(){

    int marksOfenglish;

    int marksofhindi;
    int marksofmaths;


    cout<<"enter marks of english"<<endl;
    cin>>marksOfenglish;
     cout<<"enter marks of hindi"<<endl;
    cin>>marksofhindi;
     cout<<"enter marks of maths"<<endl;
    cin>>marksofmaths;


    cout<<"avearge of all subject is "<<(marksOfenglish+marksofhindi+marksofmaths)/3<<endl;

    return 0;
}
