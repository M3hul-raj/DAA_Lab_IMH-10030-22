/* Element left after reductions. Given an array of positive elements. You need to perform a
reduction operation. In each reduction operation the smallest positive element value is
picked and all the elements are subtracted by that value. You need to print the number of
elements left after each reduction process.
Input: [5, 1, 1, 1, 2, 3, 5]
Output:
4 corresponds to [4, 1, 2, 4]
3 corresponds to [3, 1, 3]
2 corresponds to [2, 2]
0 corresponds to [0]. */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reduction(int arr[],int n)
{
    int x = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<x && arr[i]>0) x = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = arr[i] - x;
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0) count++;
    }
    
    cout<<count<<endl;
    if(count > 0) reduction(arr,n);
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reduction(arr,n);
}
