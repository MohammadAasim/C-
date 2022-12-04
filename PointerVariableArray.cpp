#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[]={20,30,40,50,60};
    int *p= marks;

    cout<<sizeof(marks)<<endl;
    cout<<sizeof(p)<<endl;

    cout<<&marks<<endl;
    cout<<&p<<endl;

    p=marks;
    cout<<p;
    
    return 0;
}