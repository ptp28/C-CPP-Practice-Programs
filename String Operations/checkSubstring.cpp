/* Write a program to determine if a string is a sub string of another string assuming that the user enters both the strings.
*/

#include<iostream>
using namespace std;

int checkIfSubstring(string mainString, string subString)
{
    int subStringCounter = 0;
    for(int i=0; i<mainString.length(); i++)
    {
        if(subString[subStringCounter] == mainString[i])
        {
            subStringCounter++;
            if(subStringCounter == subString.length())
            {
                return 1;
            }
        }
        else
        {
            subStringCounter = 0;
        }
    }
    return 0;
}

int main()
{
    string mainString, subString;
    cout<<"Enter the main string : ";
    getline(cin, mainString);
    cout<<"Enter a sub string : ";
    getline(cin, subString);

    if(checkIfSubstring(mainString, subString))
    {
        cout<<"The entered string is a substring of the main string"<<endl;
    }
    else
    {
        cout<<"The entered string is not a substring of the main string"<<endl;
    }
    return 0;
}