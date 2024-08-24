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

    cout<<"Index of first repeating element is : ";
    int index = -1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                    index = i;
                    break;
            }
        }
        if(index!=-1) break;
    }
    cout<<index;
}
