/* Write a program to accept a decimal number and convert it into binary form. For example - 
I/P: 7
O/P: 111
I/P: 10
O/P: 1010
*/

#include<iostream>
using namespace std;

void decimalToBinary(int n) 
{
    int binaryNum[32]; 
    int i = 0; 
    while (n > 0) 
    { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 

    for (int j = i - 1; j >= 0; j--) 
    {
        cout<<binaryNum[j];
    }
    cout<<endl;
} 

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    decimalToBinary(num);
    return 0;
}