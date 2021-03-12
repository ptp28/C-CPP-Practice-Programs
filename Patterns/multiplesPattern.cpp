/* Write a program to display the following pattern
1
2   4
3   6   9
4   8   12   16
5   10   15   20   25
*/

#include<iostream>
using namespace std;

void printPattern()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<(i*j)<<"   ";
        }
        cout<<endl;
    }
}

int main()
{
    printPattern();
    return 0;
}