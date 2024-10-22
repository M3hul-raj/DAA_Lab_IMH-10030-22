
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

    for(int j=0; j<n; j++){
        for(int i=j+1; i<n; i++){
            int temp = 0;
            if(arr[i]<arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Sorted elements(through bubble sort) are : ";
    for(int m=0; m<n; m++) cout<<arr[m]<<" ";
}
