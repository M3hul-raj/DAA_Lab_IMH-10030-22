/*. Given an array of n elements that is first strictly increasing and then maybe strictly
decreasing, find the maximum element in the array */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array integer : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array integer : ";
    for(int m=0; m<n; m++) cin>>arr[m];

    cout<<"Maximum element in the array is : ";
    int max = 0;
    for(int i=0; i<n-1; i++){
            if(arr[i+1]>arr[i]) max = arr[i+1];
        }
    cout<<max;
}

