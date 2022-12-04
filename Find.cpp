#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,20,34,53,54,23,55};
    int n=sizeof(arr)/sizeof(arr[0]);

    //Search ---->>>find
    int key = 34;
    auto it = find(arr,arr+n,key);
    //cout<<it;

    int index=it-arr;
    if(index==n){
        cout<<key<<" is not present"<<endl;
    }else{
        cout<<key<<" is present at index "<<index<<endl;
    }    
    return 0;
}