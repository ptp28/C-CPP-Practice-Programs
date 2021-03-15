/* Write a program to display the following pattern
            &
        *       &
    *       &       *
&       *       &       *
*/

#include<iostream>
using namespace std;

void printPattern()
{
    int counter = 1;
    for(int i=1; i<=4; i++)
    {
        for(int j=i+1; j<=4; j++)
        {
            cout<<"    ";
        }
        for(int j=1; j<=i; j++)
        {
            if(counter%2==0)
            {
                cout<<"*       ";
            }
            else
            {
                cout<<"&       ";
            }
            counter++;
        }
        cout<<endl;
    }
}

int main()
{
    printPattern();
    return 0;
}