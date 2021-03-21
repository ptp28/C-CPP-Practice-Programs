/* Write a program to display the following pattern
*                                   *   
*   *                           *   *   
*   *   *                   *   *   *   
*   *   *   *           *   *   *   *   
*   *   *   *   *   *   *   *   *   * 
*/

#include<iostream>
using namespace std;

void printPattern()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*"<<"   ";
        }
        for(int k=i; k<5; k++)
        {
            cout<<"    ";
        }
        for(int k=i; k<5; k++)
        {
            cout<<"    ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"*"<<"   ";
        }
        cout<<endl;
    }
}

int main()
{
    printPattern();
    return 0;
}