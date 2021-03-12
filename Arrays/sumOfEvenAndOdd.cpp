/* Write a program to accept a list of numbers and print the sum of all even numbers and the sum of all odd numbers seperately */

#include<iostream>
using namespace std;

int main()
{
    int num;
    int sumEven = 0, sumOdd = 0;

    cout<<"Keep entering even or odd numbers. Enter 0 (zero) to stop."<<endl;
    while(true)
    {
        cout<<"Enter a number : ";
        cin>>num;
        if(num == 0)
        {
            break;
        }
        else if(num % 2 == 0)
        {
            sumEven = sumEven + num;
        }
        else
        {
            sumOdd = sumOdd + num;
        }
    }

    cout<<"Sum of all even numbers entered = "<<sumEven<<endl;
    cout<<"Sum of all odd numbers entered = "<<sumOdd<<endl;
    return 0;
}