#include <bits/stdc++.h>
using namespace std;
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

    int x = 0;
    int med = 0;
    int median = 0;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=i; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                med = arr[i];
            }
        }
        if(count>x){
            x = count;
            median = med;
        }
    }

    cout<<"Median of the given array : "<<median;
}

