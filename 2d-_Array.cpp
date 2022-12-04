#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[5][5]={
        {23,24,25,26,27},
        {33,43,54,76,87},
        {23,43,24,65,34},
        {23,54,56,66,78},
        {45,67,79,67,78}
    };
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}