#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int n, int k) {
        // code here
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==k){
                return mid;
            }else if(arr[mid]<k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return -1;
    }
int main()
{   
    int N = 5;
    int arr[] = {1 ,2 ,3 ,4, 5};
    int K = 4;
    cout<<binarysearch(arr,N,K);
    return 0;
}


// Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

// Example 1:

// Input:
// N = 5
// arr[] = {1 2 3 4 5} 
// K = 4
// Output: 3
// Explanation: 4 appears at index 3.