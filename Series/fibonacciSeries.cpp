/* Display the fibonacci series up to n values where 'n' is accepted from the user*/

#include<iostream>
using namespace std;

void printFibonacciPattern(int length)
{
    int a = 0, b = 1, c;
    cout<<a<<" "<<b<<" ";
    for(int i=3; i<=length; i++)
    {
        c = a + b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
}

int main()
{
    int length;
    cout<<"Enter the length of the fibonacci series : ";
    cin>>length;

    printFibonacciPattern(length);
    return 0;
}