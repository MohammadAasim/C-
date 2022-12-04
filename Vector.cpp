#include <bits/stdc++.h>
#include<vector>

using namespace std;
int main()
{
    // Initialise a vector
    vector<int>a;
    vector<int>b(5,10);//five int with value 10
    vector<int>c(b.begin(),b.end());
    vector<int>d{1,2,3,4,5};

    //Look at how can iterate over vector
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    for(auto it =b.begin();it!=b.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //more function
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    // Understand at Memory lavel
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    return 0;
}