/*Write a program to generate all divisors of a number which is entered by the user */

#include<iostream>
using namespace std;
 
void printDivisors(int num)
{
    for(int i=1; i<=num; i++)
	{
		if(num % i == 0)
			cout<<i<<"  ";
	}
    cout<<endl;
}

int main()
{
    int num;
	cout<<"Enter a number to generate its divisors : ";
	cin>>num;

    printDivisors(num);
	return 0;
}