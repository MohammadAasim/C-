#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[5];
    for (int i=0; i<5; i++){
        arr2[i] = arr1[i];
    }
    cout<<"arr1"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;    
    cout<<"arr2"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    arr2[2]=4;
    cout<<endl;
    cout<<"After arr2[2]=4 arr2"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"arr1"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }  
    return 0;
}