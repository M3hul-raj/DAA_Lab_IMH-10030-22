
#include <iostream>
using namespace std;

int fixedPoint(int arr[],int m){
    for(int i=0; i<m; i++){
        if(arr[i]==i) return i;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array integer : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array integer : ";
    for(int m=0; m<n; m++) cin>>arr[m];

    cout<<"Fixed point in the array is : ";
    cout<<fixedPoint(arr,n)<<endl;


}

