#include <bits/stdc++.h>
using namespace std;
int Distinct_Elements(int arr[],int n){
    for(int i=0;i<n;i++){

        int j;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                break;
            }
        }

        if(i == j){
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int arr[]={1,1,2,2,3,3,3,4,4,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Distinct_Elements(arr,n);
    return 0;
}