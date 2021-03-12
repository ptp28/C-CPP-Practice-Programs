/* Write a program to check if a number is a duck number or not. A number is said to be a duck number if it contains the digit 0.*/

#include<iostream>
using namespace std;

int checkDuckNumber(long int num)
{
    int digit;
    int sum = 0;
    while(num > 0)
    {
        digit = num % 10;
        num = num / 10;

        if(digit == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    long int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(checkDuckNumber(num))
    {
        cout<<"The number is a duck number"<<endl;
    }
    else
    {
        cout<<"The number is not a duck number"<<endl;
    }
    return 0;
}