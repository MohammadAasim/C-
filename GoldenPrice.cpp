#include <bits/stdc++.h>
using namespace std;
bool golden(int x){
    int s=0;
    int max=0;
    while(x>0){
        if(x%10>max){
            max=x%10;
        }
        s=s+x%10;
        x=x/10;
    }
    if(max*2==s){
        return true;
    }else{
        return false;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=n;i<=m;i++){
        if(golden(i)==false){
            sum+=i;
        }   
    }
    cout<<sum;
    return 0;
}