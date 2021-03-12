/* Write a program to find the LCM of 2 numbers entered by the users */

#include <iostream>
using namespace std;

void returnLCM(int num1, int num2)
{
    int max;
    if(num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    do
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            cout << "LCM = " << max << endl;
            break;
        }
        else
        {
            ++max;
        }
    }while(true);
}

int main()
{
    int num1, num2;

    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    
    returnLCM(num1, num2);
    return 0;
}