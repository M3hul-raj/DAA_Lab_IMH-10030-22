/*  In a given list of n-1 elements, which are in the range of 1 to n. There are no duplicates
in the array. One of the integers is missing. Find the missing element. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    cout<<"Enter the elements of the array in the range of 1 to "<<n+1<< " : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = arr[i] + sum;
    }
    int mis = (((n+1)*(n+2))/2) - sum;
    cout<<"Missing element : "<<mis;
}
