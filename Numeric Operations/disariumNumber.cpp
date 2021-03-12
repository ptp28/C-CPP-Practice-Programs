/* Write a program to check if the given number is a 'Disarium' number. A number is a 'Disarium' number if the sum of digits powered to their respective position is the number itself. For example - 
135 -> 1^1 + 3^2 + 5^3 = 1 + 9 + 125 = 135 
175 -> 1^1 + 7^2 + 5^3 = 1 + 49 + 125 = 175
*/

#include<iostream>
#include<cmath>
using namespace std;

int calculateLength(int num)
{
    int length = 0;
    while(num != 0)
    {
        length++;
        num = num/10;
    } 
    return length;
}

int calculateDisarium(int num)
{
    int digit;
    int sum = 0;
    int length = calculateLength(num);
    while(num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + pow(digit, length);
        length--;
    }
    return sum;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int result = calculateDisarium(num);
    if(result == num)
    {
        cout<<"The entered number is a Disarium number"<<endl;
    }
    else
    {
        cout<<"The entered number is not a Disarium number"<<endl;
    }
    return 0;
}