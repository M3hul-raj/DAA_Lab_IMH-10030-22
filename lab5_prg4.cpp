/* Given an unsorted array arr[] of length N, the task is to find the median of this array. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Element in the array is : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int temp = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    float median = 0;
    if(n%2==0){
        median = (arr[n/2] + arr[(n/2)-1])/2.0;
        }
    else{
        median = arr[n/2];
        }
    cout<<"Median is : "<<median;
}
    
