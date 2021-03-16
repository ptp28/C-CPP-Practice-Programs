/* Write a program to accept a decimal number and convert it into hexadecimal form. For example - 
I/P: 10
O/P: A
I/P: 2545
O/P: 9F1
*/

#include<iostream>
using namespace std;

void decimalToHexadecimal(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) 
    {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) 
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else 
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
        n = n / 16;
    }

    for (int j = i - 1; j >= 0; j--) 
    {
        cout<<hexaDeciNum[j];
    }
    cout<<endl;
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    decimalToHexadecimal(num);
    return 0;
}