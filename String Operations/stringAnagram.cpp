/* Write a program to check if the given two strings are anagrams. Two strings are said to be anagrams of each other if they contain the same set of characters but their ordering is different */

#include<iostream>
using namespace std;


void findFrequencyOfCharacters(string str, int count[26])
{
    int alphabetNumber = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            alphabetNumber = str[i] - 'a';
            count[alphabetNumber]++;
        }
    }
}

int checkIfArraysAreEqual(int arr1[], int arr1Length, int arr2[], int arr2Length)
{
    if(arr1Length != arr2Length)
    {
        return 0;
    }
    for(int i=0; i<arr1Length; i++)
    {
        if(arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}


int checkAnagram(string str1, string str2)
{
    int count1[26] = { 0 }, count2[26] = { 0 };
    findFrequencyOfCharacters(str1, count1);
    findFrequencyOfCharacters(str2, count2);
    
    return (checkIfArraysAreEqual(count1, 26, count2, 26));
}


int main()
{
    string str1, str2;
    
    cout<<"Enter the first string : ";
    cin>>str1;
    cout<<"Enter the second string : ";
    cin>>str2;

    if(checkAnagram(str1, str2))
    {
        cout<<"The two strings are anagrams of each other"<<endl;
    }
    else
    {
        cout<<"The two strings are not anagrams of each other"<<endl;
    }
    return 0;
}