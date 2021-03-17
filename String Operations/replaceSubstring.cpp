#include<iostream>
using namespace std;

int findSubstring(string mainString, string subString)
{

    for(int i=0, j=0; i<mainString.length(); i++)
    {
        if(subString[j] == mainString[i])
        {
            j++;
        }
        else
        {
            j=0;
        }
        if(j == subString.length())
        {
            return (i-subString.length());
        }
    }
    return -1;
}

string generateNewString(string mainString, string replacingString, int subStringPosition, int substringLength)
{
    char tempString[mainString.length() + replacingString.length()];
    int i=0, j=0;
    for(i=0; i<=subStringPosition; i++)
    {
        tempString[i] = mainString[i];
    }
    while(j < replacingString.length())
    {
        tempString[i] = replacingString[j];
        j++;
        i++;
    }
    for(j=(subStringPosition+substringLength)+1; j<mainString.length(); j++)
    {
        tempString[i] = mainString[j];
    }
    return tempString;
}

int main()
{
    string mainString, subString, replacingString, newString;

    cout<<"Enter the main string : ";
    getline(cin,mainString);
    cout<<"Enter the substring that has to be replaced : ";
    getline(cin,subString);
    cout<<"Enter the string that is to be inserted : ";
    getline(cin,replacingString);

    int subStringPosition = findSubstring(mainString, subString);

    if(subStringPosition != -1)
    {
        newString = generateNewString(mainString, replacingString, subStringPosition, subString.length());
        cout<<"The new string is = "<<newString<<endl;
    }
    else
    {
        cout<<"The substring you entered was not found in the main string."<<endl;
    }
    return 0;
}