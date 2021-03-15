/* Write a program to check whether a number is a krishnamurty/special number or not. A number is said to be a krishnamurty number if the sum of the factorial of its digits is the number itself. For example - 
145 => 1!+4!+5! = 1+24+120 = 145
*/

#include<iostream>
using namespace std;

int factorial(int n) 
{ 
    int fact = 1; 
    while (n != 0) 
    { 
        fact = fact * n; 
        n--; 
    } 
    return fact; 
}

int checkKrishnamurthyNumber(int n) 
{ 
    int sum = 0; 
    int temp = n; 
    while (temp != 0) 
    {
        sum += factorial(temp % 10); 
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

    if(checkKrishnamurthyNumber(num))
    {
        cout<<"The number is a Krishnamurty number"<<endl;
    }
    else
    {
        cout<<"The number is not a Krishnamurty number"<<endl;
    }
    return 0;
}