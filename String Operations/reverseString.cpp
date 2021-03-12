/* Write a program to  reverse the words of a string and display the reversed word string. 
For example - 
I/P : Have a nice day
O/P : day nice a Have
*/

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a sentence : ";
    getline(cin, str);

    int previousSpaceIndex = str.length()-1;
    for(int i=str.length()-1; i>=0; i--)
    {
        if(str[i]==' ' || i==0)
        {
            for(int j=i; j<=previousSpaceIndex; j++)
            {
                cout<<str[j];
            }
            previousSpaceIndex = i;
        }
    }
    cout<<endl;
    return 0;
}