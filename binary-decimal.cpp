#include<bits/stdc++.h>
using namespace std;

int binary_decimal(int n){
   int  dec=0;
    int base=1;
    while(n!=0){
        int rem=n%10;
        dec=dec+base*rem;
        n=n/10;
        base=base*2;
    }
     return dec;

}
int main(){
    int n;
    cin>>n;
    cout<<binary_decimal(n);
    
   
    
    return 0;
    
}