/* Write a program to display the following pattern
        &
    &       &
&       &       &
*/

#include<iostream>
using namespace std;

void printPattern()
{
    for(int i=1; i<=3; i++)
    {
        for(int j=i+1; j<=3; j++)
        {
            cout<<"    ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"&       ";
        }
        cout<<endl;
    }
}

int main()
{
    printPattern();
    return 0;
}