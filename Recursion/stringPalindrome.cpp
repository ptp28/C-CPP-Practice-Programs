/* Write a program to determine if the user entered string is a palindrome or not. A string is said to be a palindrome string if it is equal to its reverse */

#include<iostream>
using namespace std;

int checkIfStringPalindrome(string str, int lowerIndex, int higherIndex)
{
    if (lowerIndex >= higherIndex) {
        return true;
    }
 
    if (str[lowerIndex] != str[higherIndex]) {
        return false;
    }

    return checkIfStringPalindrome(str, lowerIndex + 1, higherIndex - 1);
}

int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;

    if(checkIfStringPalindrome(str, 0, str.length() - 1))
    {
        cout<<"It is a palindrome string"<<endl;
    }
    else
    {
        cout<<"It is not a palindrome string"<<endl;
    }
    
    return 0;
}
