/* Write a program to accept a decimal number and convert it into binary form. For example - 
I/P: 111
O/P: 7
I/P: 1010
O/P: 10
*/

#include<iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) 
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}

int main()
{
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;

    cout<<"The equivalent decimal number is : "<<binaryToDecimal(num)<<endl;
    return 0;
}