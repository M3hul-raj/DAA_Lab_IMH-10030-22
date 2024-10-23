/*. Given an unsorted array and a number n, find if there exists a pair of elements in the
array whose difference is n. */

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the size of array integer : ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements of array integer : ";
    for(int m=0; m<x; m++) cin>>arr[m];

    int n;
    cout<<"Enter the number n : ";
    cin>>n;
    cout<<"Pair of elements in the array whose difference is "<<n<<" is : "<<endl;
    for(int i=0; i<x; i++){
        for(int j=0; j<x; j++){
            if(arr[i] - arr[j] == n){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}
