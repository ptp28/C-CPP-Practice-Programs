/* Write a program to check if the given pair of numbers are co-prime.
2 numbers are said to be co-prime if their gcd/hcm is 1 */

#include<iostream>
using namespace std;

int returnHCF(int num1, int num2)
{
    int hcf = 0;
    for(int i=1; i<=num1; i++)
	{
        if(num1%i==0 && num2%i==0)
	    {
	        hcf = i;
	    }
	}
    return hcf;
}

int main()
{
	int num1, num2, hcf, i;
	cout<<"Enter two numbers : ";
	cin>>num1>>num2;
	
    hcf = returnHCF(num1, num2);
	if(hcf == 1)
	{
	    cout<<"The entered numbers are co-prime numbers"<<endl;
	}
	else
	{
	  cout<<"The entered numbers are not co-prime numbers"<<endl;
	}
	return 0;
}