/* Given two binary strings that represent the value of two integers, find the product of two
strings. */

#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(const string& binaryStr) {
    int decimalValue = 0;
    int base = 1;
    
    for (int i = binaryStr.length() - 1; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            decimalValue += base;
        }
        base *= 2;
    }
    return decimalValue;
}

string decimalToBinary(int decimalValue) {
    if (decimalValue == 0) return "0";
    
    string binaryStr = "";
    while (decimalValue > 0) {
        binaryStr = (decimalValue % 2 == 0 ? "0" : "1") + binaryStr;
        decimalValue /= 2;
    }
    return binaryStr;
}

int main() {
    string binaryStr1, binaryStr2;
    
    cout << "Enter the first binary string: ";
    cin >> binaryStr1;
    cout << "Enter the second binary string: ";
    cin >> binaryStr2;
    
    int num1 = binaryToDecimal(binaryStr1);
    int num2 = binaryToDecimal(binaryStr2);

    int product = num1 * num2;

    string productBinary = decimalToBinary(product);
    cout << "The product of the two binary strings is: " << productBinary << endl;
    return 0;
}
