#include <bits/stdc++.h>
using namespace std;
int  Rain_Water_Trapping(int arr[],int n){
    int maxl[n];
    int maxr[n];
    maxl[0]=arr[0];
    maxr[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        maxl[i]= max(maxl[i-1],arr[i]);
    }
    for(int i=n-2;i>=0;i--){
        maxr[i]= max(maxr[i+1],arr[i]);
    }
    int water[n];
    for(int i=0;i<n;i++){
        water[i]=min(maxl[i],maxr[i])-arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+water[i];
    }
    return sum;
}
int main()
{
    int arr[]={3,0,0,2,0,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<Rain_Water_Trapping(arr,n);
    return 0;
}