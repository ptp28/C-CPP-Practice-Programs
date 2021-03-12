/* Accept a number and determine if given number is a prime number or not */

#include<iostream>
using namespace std;

void checkIfPrime(int num)
{
    int divcounter = 0;
    for(int counter = 1; counter<=num; counter++)
    {
        if(num % counter == 0)
        {
            divcounter++;
        }
    }
    if(divcounter == 2)
    {
            cout <<"It is a prime number"<<endl;
    }
    else
    {
            cout<<"It is not a prime number"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    checkIfPrime(num);
    return 0;
}