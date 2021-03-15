/* Write a program to check if the given two strings are anagrams. Two strings are said to be anagrams of each other if they contain the same set of characters but their ordering is different */

#include<iostream>
using namespace std;


void findFrequencyOfCharacters(string str, int count[26])
{
    int alphabetNumber = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            alphabetNumber = str[i] - 'a';
            count[alphabetNumber]++;
        }
    }
}

void printCharacterFreqency(int arr[], int size)
{
    char ch = 'a';
    for(int i=0; i<size; i++)
    {
        if(arr[i] != 0)
        {
            cout<<(char)(ch+i)<<" - "<<arr[i]<<endl;
        }
    }
    cout<<endl;
}

int main()
{
    string str;
    int count[26] = { 0 };

    cout<<"Enter the string : ";
    getline(cin, str);

    findFrequencyOfCharacters(str, count);

    cout<<"The frequency count of the characters in the entered string is : ";
    printCharacterFreqency(count, 26);
    return 0;
}