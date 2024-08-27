#include <iostream> 
using namespace std;
 
int fibonacci(int n) { 
if (n <= 1) { 
    return n; 
}
int a = 0; 
int b = 1; 
int result = 1; 
for (int i = 2; i <= n; i++) { 
    result = a + b; 
    a = b; 
    b = result; 
} 
return result; 
} 

int main() 
{ 
    int n; 
    cout << "Enter a number: "; 
    cin >> n; 
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl; 
    return 0; 
}
