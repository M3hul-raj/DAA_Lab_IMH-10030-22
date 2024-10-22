#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    for(int i=0; i<n; i++){
        int max = INT_MAX;
        int index = -1;
        int temp = 0;
        for(int j=i; j<n; j++){
            if(arr[j]<max){
                max = arr[j];
                index = j;
            }
        }
    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
    }
    cout<<"Sorted elements(through selection sort) are : ";
    for(int m=0; m<n; m++) cout<<arr[m]<<" ";
}
