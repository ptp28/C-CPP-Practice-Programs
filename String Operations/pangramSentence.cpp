/*  A pangram is a string that contains every letter of the alphabet. Given a sentence determine whether it is a pangram in the English alphabet.
I/P: The quick brown fox jumps over the lazy dog
O/P: Pangram string
(The string contains all letters in the English alphabet, so it is a pangram string)
I/P: We promptly judged antique ivory buckles for the next prize
O/P: Pangram string
I/P: The brown fox jumps over the lazy dog
O/P: Not a Pangram string
*/


#include<iostream>
using namespace std;

string checkPangramString(string s) 
{
    int alphabetCount[26] = { 0 };
    int alphabetNumber;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            alphabetNumber = s[i] - 'a';
            alphabetCount[alphabetNumber]++;
        }
    }
    
    for(int i=0; i<26; i++)
    {
        if(alphabetCount[i] == 0)
        {
            return "it is not a pangram string.";
        }
    }
    return "it is a pangram string.";
}

int main()
{
    string s;
    cout<<"Enter a sentence : ";
    getline(cin, s);
    cout<<checkPangramString(s)<<endl;
    return 0;
}