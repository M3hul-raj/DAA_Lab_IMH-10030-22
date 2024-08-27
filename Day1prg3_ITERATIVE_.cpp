#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int fact = x;
    for(int i=(x-1);i>0; i--){ 
        fact = fact*i;
    }
    cout<<"Factorial of given number is : ";  
    cout<<fact;
}