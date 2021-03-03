/* Program a calculator to perform all the basic operations ('+' / '-' / '*' / '/' / '%') using switch case*/

#include<iostream>
using namespace std;

void calculator(float num1, float num2, char operation)
{
    int addition;
    int subtraction;
    int multiplication;
    float division;
    int remainder;

    switch(operation) 
    {
        case '+':
        addition = num1 + num2;
        cout<<"The addition is = " << addition << endl;
        break;

        case '-':
        subtraction = num1 - num2;
        cout<<"The subtraction is = " << subtraction << endl;
        break;

        case '*':
        multiplication = num1 * num2;
        cout<<"The multiplication is = " << multiplication << endl;
        break;

        case '/':
        division = (float) num1 / num2;
        cout<<"The division is = " << division << endl;
        break;

        case '%':
        remainder = (int)num1 % (int)num2;
        cout<<"The remainder is = " << remainder << endl;
        break;

        default:
        cout<<"ERROR : You are only supposed to enter (+ / - / *)" <<endl;
        break;
    }
    cout<<"End of calculation";
}

int main() 
{
    float num1;
    float num2;

    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;

    char operation;
    cout<<"Enter operation ('+' / '-' / '*' / '/' / '%') : ";
    cin>>operation;

    calculator(num1, num2, operation);
    return 0;
}


