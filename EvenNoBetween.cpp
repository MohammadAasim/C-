#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,h;
    cout<<"Enter lower Number : ";
    cin>>l;
    cout<<"Enter higher Number : ";
    cin>>h;
    cout<<"Even Number between "<<l<<" to "<<h<<" are :";
    for(int i=l;i<h;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}