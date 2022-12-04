#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int n,int arr[], int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int ans=LinearSearch(n,arr,key);
    if(ans==-1){
        cout<<"Element is not found";
    }else{
        cout<<"Element is found at the index : "<<ans<<endl;
    }
    return 0;
}