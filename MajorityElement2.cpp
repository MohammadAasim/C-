#include <bits/stdc++.h>
using namespace std;
int majorityelement(int arr[],int n){
    int count=1;
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            count=1;
            res=i;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,3,4,3,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majorityelement(arr,n);
    return 0;
}