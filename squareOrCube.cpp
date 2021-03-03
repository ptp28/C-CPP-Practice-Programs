/* Accept a number and check if the given number is even or odd. If the number is even, print the square of the number, else print the cube of the number */

#include<iostream>
#include<cmath>
using namespace std;

int checkIfEven(int num)
{
    if(num % 2 == 0)
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

    if(checkIfEven(num))
    {
        cout<<"It is an even number"<<endl;
        cout<<"The square of the number is = "<<pow(num, 2)<<endl;
    }
    else
    {
        cout<<"It is an odd number"<<endl;
        cout<<"The cube of the number is = "<<pow(num, 3)<<endl;
    }
    return 0;
}