/* Write a program to calculate the hamming distance between two numbers. Hamming distance can be found by converting the numbers into their binary equivalents and count the number of different digits. For example - 
I/P: Numbers = 7, 10
     Binary equivalents = 111, 1010
O/P: Hamming distance = 3
*/

#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n, int binaryNum[32]) 
{
    int bits = 0; 
    while (n > 0) 
    { 
        binaryNum[bits] = n % 2; 
        n = n / 2; 
        bits++; 
    }
    return bits;
}

int calculateHammingDistance(int binaryNum1[32], int bits1, int binaryNum2[32], int bits2)
{
    int count = 0, num1Bit, num2Bit;
    for(int i=max(bits1, bits2)-1; i>=0; i--)
    {
        num1Bit = -1;
        num2Bit = -1;
        if(i < bits1)
        {
            num1Bit = binaryNum1[i];
        }
        if(i < bits2)
        {
            num2Bit = binaryNum2[i];
        }

        if(num1Bit != num2Bit)
        {
            count++;
        }
    }
    return count;
}

void displayBinaryNumber(int binaryNum[], int bits)
{
    cout<<"The equivalent binary number is : ";
    for (int j = bits - 1; j >= 0; j--) 
    {
        cout<<binaryNum[j];
    }
    cout<<endl;
}

int main()
{
    int num1, num2, bits1, bits2;
    int binaryNum1[32], binaryNum2[32];
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    bits1 = decimalToBinary(num1, binaryNum1);
    bits2 = decimalToBinary(num2, binaryNum2);

    displayBinaryNumber(binaryNum1, bits1);
    displayBinaryNumber(binaryNum2, bits2);

    int distance = calculateHammingDistance(binaryNum1, bits1, binaryNum2, bits2);
    cout<<"The hamming distance between the two numbers is = "<<distance<<endl;
    return 0;
}