/* Write a program to display the following pattern
A
B   C
D   E   F
G   H   I   J
*/

#include<iostream>
using namespace std;

void printPattern()
{
    char ch = 'A';
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch<<"   ";
            ch++;
        }
        cout<<endl;
    }
}

int main()
{
    printPattern();
    return 0;
}