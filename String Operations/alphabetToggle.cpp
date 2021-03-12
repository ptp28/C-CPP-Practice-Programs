/* Write a program to toggle the cases of the alphabets in the input string. */

#include<iostream>
using namespace std;

string toggleCases(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}


int main() 
{
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

    cout<<"String after toggling the cases is : "<<toggleCases(str)<<endl;
    return 0;
}