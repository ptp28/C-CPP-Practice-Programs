/* Write a program to replace every vowel that occurs at an odd position by the aphabet which follows it. Accept the string from the user */

#include<iostream>
using namespace std;

int checkIfVowel(char ch)
{
    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
        {
            return 1;
        }
    return 0;
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if(checkIfVowel(str[i]))
        {
            if((i+1)%3 == 0)
            {
                str[i] = str[i+1];
            }
        }
    }
    cout<<"The string after modification is : "<<str<<endl;
    return 0;
}