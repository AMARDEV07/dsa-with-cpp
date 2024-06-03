#include<iostream>
using namespace std;

void selectionsort(int*nums,int n){

    for(int i=0;i<n-1;i++){
       int min=i;
       for(int j=i+1;j<n;j++){
        if(nums[j]<nums[min]){
            min=j;

        }
       }
       swap(nums[i],nums[min]);

    }

}
void print( int *nums, int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<endl;
    }
}

int main(){
    int nums[]={4,78,9,2};
    int n=4;

selectionsort(nums,n);
print(nums,n);
}
   