#include<bits/stdc++.h>
using namespace std;
void MaximumWinner(int n,string s){
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A'){
            a++;
        }else if (s[i] == 'D'){
            b++;
        }    
    }
    if(a>b){
        cout<<"Aditya"<<endl;
    }else if (b>a){
        cout<<"Danish"<<endl;
    }else{
        cout<<"AdiDan"<<endl;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        MaximumWinner(n,s);
    }
}