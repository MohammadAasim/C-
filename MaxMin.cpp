#include <bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minNo=INT_MAX;
    int maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"Maximum Element : "<<maxNo<<endl;
    cout<<"Minimum Element : "<<minNo<<endl;
    return 0;
}