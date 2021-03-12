/* Accept a number and check if the given number is even or odd */

#include<iostream>
using namespace std;

void checkEvenOdd(int num)
{
    if(num % 2 == 0)
    {
        cout <<"It is an even number";
    }
    else
    {
        cout<<"It is an odd number";
    }
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    checkEvenOdd(num);
    return 0;
}