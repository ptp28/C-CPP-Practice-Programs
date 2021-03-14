/* Write a program to check if the given number is a magic number. A number is a magic number if the successive sum of its digits is 1. For example - 
82 -> 8+2 = 10, 10 -> 1+0 = 1
*/

#include<iostream>
#include<cmath>
using namespace std;

int calculateMagicNumber(int num)
{
    int digit;
    int sum = 0;
    while(num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + digit;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int sumOne = calculateMagicNumber(num);
    int sumTwo = calculateMagicNumber(sumOne);
    if(sumTwo == 1)
    {
        cout<<"The entered number is a magic number"<<endl;
    }
    else
    {
        cout<<"The entered number is not a magic number"<<endl;
    }
    return 0;
}