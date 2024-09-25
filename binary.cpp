#include<iostream>
using namespace std;

int binarysearch(int arr[],int num,int n); 

int main(){
    int arr[]={ 1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/4;
    int num=3;
    int index= binarysearch(arr,num,n);
    cout<<index ;
}
int binarysearch(int arr[],int num,int n){
    int start =0 ,end =n -1;

    int mid = (start+end)/2;
    while (mid!=0)
    {
        if(mid==num){
        return mid;
        }
    else if (num < mid)
    {
        mid =(start+mid)/2;
    }
   
    else if (num > mid)
    {
        mid = (mid+end)/2;
    }
    
    return -1;
    }

}
