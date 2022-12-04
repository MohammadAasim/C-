#include<bits/stdc++.h>
using namespace std;
int peakElement(int arr[], int n)
    {
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if (mid>0 or mid<n-1){
                if(mid>mid-1 and mid>mid+1){
                    return mid;
                }else if(mid-1>mid){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else if(mid==0){
                if(arr[0]>arr[1]){
                    return 0;
                }else{
                    return 1;
                }
            }else if (mid==n-1){
                if(arr[n-1]>arr[n-2]){
                    return n-1;
                }else{
                    return n-2;
                }
            }
        }
        return mid;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int arr[3]={1,2,3};
    cout<<"Peak Element Index : "<<peakElement(arr,n);
}