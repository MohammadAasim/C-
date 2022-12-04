#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            marks[i][j]=i*j;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}