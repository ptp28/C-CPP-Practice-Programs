/* Write a program to calculate the sum of digits of a number accepted from the user. Print the total sum.*/

#include<iostream>
using namespace std;

int sumOfDigitsOfNumber(long int num)
{
    int digit;
    int sum = 0;
    while(num > 0)
    {
        digit = num % 10;
        num = num / 10;

        sum = sum + digit;
    }
    return sum;
}

int main()
{
    long int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout<<"Sum of the digits of the entered number is = "<<sumOfDigitsOfNumber(num)<<endl;
    return 0;
}