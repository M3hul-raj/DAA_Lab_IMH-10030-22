/*  Given a sorted array and a number x, find a pair in an array whose sum is x. */ 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array integer : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of sorted array integer : ";
    for(int m=0; m<n; m++) cin>>arr[m];

    int x;
    cout<<"Enter the number x : ";
    cin>>x;
    cout<<"Pair of elements in the array whose sum is "<<x<<" is : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] + arr[j] == x){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                break;
            }
        }
    }
}
