#include <bits/stdc++.h>
using namespace std;
int MajorityElement(int arr[],int n){
    for(int i=0;i<n;i++){
        int ele=arr[i];
        int count=0;

        for(int j=0;j<n;j++){
            if(arr[j]==ele){
                count++;
            }
        }
        
        if(count<=(n/2)){
            return -1;
        }else{
            return arr[i];
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>n;
    }
    cout<<MajorityElement(arr,n);
    return 0;
}