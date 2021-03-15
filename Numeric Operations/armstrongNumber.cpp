/* Write a program to check whether a number is an armstrong number or not. A number is said to be an armstrong number of order n (order is number of digits) if - 
153 => (1*1*1) + (5*5*5) + (3*3*3) = 1+125+27 = 153
1634 => (1*1*1*1) + (6*6*6*6) + (3*3*3*3) + (4*4*4*4) = 1634
*/

#include<iostream>
using namespace std;

int returnXRaisedToY(int x, int y)
{
    int pow = 1;
    for(int counter = 1; counter <= y; counter++)
    {
        pow = pow * x;
    }
    return pow;
}

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

int checkArmstrongNumber(int n) 
{
    int sum = 0; 
    int temp = n; 
    int length = calculateLength(n);
    while (temp != 0) 
    {
        sum = sum + returnXRaisedToY((temp%10), length); 
        temp = temp / 10; 
    }

    if(sum == n)
    {
        return 1;
    }
    return 0; 
} 


int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    if(checkArmstrongNumber(num))
    {
        cout<<"The number is an Armstrong number"<<endl;
    }
    else
    {
        cout<<"The number is not an Armstrong number"<<endl;
    }
    return 0;
}