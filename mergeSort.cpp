#include<bits/stdc++.h>
using namespace std;
int merge_sort(int arr[],int l,int r,int n){
    int m= (l+r)/2;
    int temp;
    while(l>r)
    for(int i=0;i<=m-1;i++){
        if(arr[l]>arr[r]){
            temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;        
        }
    }
    for(int i= m+1; i<=r;i++){
        if(arr[m+1]>arr[r])
        {
            temp=arr[m+1];
            arr[m+1]=arr[r];
            arr[r]=temp;
        }
    }
    int printarray(int arr[],int n){
        for(int i=0;i<n;i++ ){
            cout<<arr[i]<<" ";
        }
    }
}
    int main(){
    int arr[]={38,27,42,43,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,l,r,n);
    printarray(arr,n);

    }

