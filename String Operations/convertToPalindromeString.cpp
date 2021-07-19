/* Given a string of lowercase letters in the range ascii[a-z], determine the index of a character that can be removed to make the string a palindrome. There may be more than one solution, but any will do. If the word is already a palindrome or there is no solution, return -1. Otherwise, return the index of a character to remove.
Example : 
I/P: s => "bcbc"
O/P: 0
EXPLAINATION => Either remove 'b' at index 0 or 'c' at index 3.
*/

#include<iostream>
using namespace std;

int checkIfStringPalindrome(string str) {
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

int palindromeIndex(string s) {
    string temp;
    for(int i=0; i<s.length(); i++) {
        temp = s;
        temp.erase(i, 1);
        if(checkIfStringPalindrome(temp)) {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout<<"bcbc -> "<<palindromeIndex("bcbc")<<endl;
    cout<<"ap -> "<<palindromeIndex("ap")<<endl;
    cout<<"abcd -> "<<palindromeIndex("abcd")<<endl;
    cout<<"madam -> "<<palindromeIndex("madam")<<endl;
    return 0;
}