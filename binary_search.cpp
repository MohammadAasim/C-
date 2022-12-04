#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={20,30,40,40,40,50,60,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    //Search in sorted array
    int key;
    cin>>key;

    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }

    //Two more thing
    //Get the index of the element
    //Lower_bound(s,e,key) and upper_bound(s,e,key)


    auto lb=lower_bound(arr,arr+n,40);//give >=key
    cout<<"Lower Bound of 40 "<<lb-arr<<endl;

    auto ub=upper_bound(arr,arr+n,40);//give key< ie 50
    cout<<"Upper Bound of 40 "<<ub-arr<<endl;

    cout<<"occ Frequncy of 40 are "<<(ub-lb);
    return 0;
}