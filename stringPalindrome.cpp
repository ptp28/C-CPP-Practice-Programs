/* Write a program to determine if the user entered string is a palindrome or not. A string is said to be a palindrome string if it is equal to its reverse */

#include<iostream>
using namespace std;

int checkIfStringPalindrome(string str)
{
    int counterLower  = 0;
    int counterUpper = str.length()-1;

    while(str[counterLower] == str[counterUpper] && counterLower <= counterUpper)
    {
        counterLower++;
        counterUpper--;
    }

    if(counterLower <= counterUpper)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;

    if(checkIfStringPalindrome(str))
    {
        cout<<"It is a palindrome string"<<endl;
    }
    else
    {
        cout<<"It is not a palindrome string"<<endl;
    }
    
    return 0;
}
