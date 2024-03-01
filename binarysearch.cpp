#include<bits/stdc++.h>
using namespace std;
 int binarysearch(int arr[],int n, int key)
 {
    int s=0;
    int e=n;

    while(s<=e)
    {  int mid= (s+e)/2;
        if(arr[mid]=key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }    
        }
        return -1;
    }
    int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key= 40;
cout<<binarysearch(arr,n,key);
    }
 