#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reduction(int arr[],int n){

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

    if(count > 0){
        reduction(arr,n);
    }

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
