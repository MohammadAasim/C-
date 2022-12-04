#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>d{1,2,3,4,5,6,7};
    //Push back O(1) for most of the time
    d.push_back(8);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //Pop back O(1) remove last element
    d.pop_back();
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //Inser some element in the middle
    d.insert(d.begin()+3,4);
    //d.insert(d.begin()+3,3,4);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //Erase some element in the middle O(n)
    d.erase(d.begin()+3);
    //d.erase(d.begin()+2,d.begin()+5);
    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    //size;
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid the shrink
    d.resize(18);
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    return 0;
}