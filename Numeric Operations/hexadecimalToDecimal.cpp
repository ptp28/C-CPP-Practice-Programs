/* Write a program to accept a decimal number and convert it into hexadecimal form. For example - 
I/P: A
O/P: 10
I/P: 9F1
O/P: 2545
*/

#include<iostream>
using namespace std;

int hexadecimalToDecimal(char num[]) 
{
   int len = strlen(num);
   int base = 1;
   int temp = 0;
   for (int i=len-1; i>=0; i--) 
   {
      if (num[i]>='0' && num[i]<='9') 
      {
         temp += (num[i] - 48)*base;
         base = base * 16;
      }
      else if (num[i]>='A' && num[i]<='F') 
      {
         temp += (num[i] - 55)*base;
         base = base*16;
      }
   }
   return temp;
}

int main()
{
    char num[32];
    cout<<"Enter a hexadecimal number : ";
    cin>>num;

    cout<<"The equivalent decimal number is : "<<hexadecimalToDecimal(num)<<endl;
    return 0;
}