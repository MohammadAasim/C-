#include <bits/stdc++.h>
using namespace std;
bool checkIsAP(vector<int>v, int n)
{
    if (n == 1)
        return true;
    sort(v.begin(), v.end());
    int d = v[1] - v[0];
    for (int i = 2; i < n; i++)
        if (v[i] - v[i - 1] != d)
            return false;
    return true;
}
int solved(){
    int m,n;
    cin>>m>>n;
    vector<int>v1;
    vector<int>v2;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a;
        v1.push_back(a);
    }
    for(int i=0;i<n;i++){
        cin>>b;
        v2.push_back(b);
    }
    int count=0;
    next_permutation(v1.begin(),v2.end());
    for(int i = v1.begin();i<v1.end();i++){
        if(checkIsAP(i,n)){
            count++;
        }
    }
    cout<<count;
    
    


}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solved();
    }
    return 0;
}   