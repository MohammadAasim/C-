#include <bits/stdc++.h>
using namespace std;
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
    int pos;
    cin>>pos;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=key;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}