/* Write a program to capitalize the first letter of each word of the user entered string.
For example - 
I/P: have a nice day
O/P: Have A Nice Day
*/

#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a sentence : ";
    getline(cin, str);

    if(str[0] >= 'a' || str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==' ' && (str[i+1] >= 'a' || str[i+1] <= 'z'))
        {
            str[i+1] = str[i+1] - 32;
        }
    }
    cout<<"The capitalized string is : "<<str<<endl;
    return 0;
}