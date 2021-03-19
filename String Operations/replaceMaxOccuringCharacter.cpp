/* Accept a string. Find the maximum occuring character and replace all the occurences of that character with the least occuring character */

#include<iostream>
using namespace std;

int findMaxOccuringCharacter(int count[26])
{
    int max = INT_MIN;
    int index = -1;
    for(int i=0; i<26; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            index = i;
        }
    }
    return index;
}

int findMinOccuringCharacter(int count[26])
{
    int min = INT_MAX;
    int index = -1;
    for(int i=0; i<26; i++)
    {
        if(count[i] < min && count[i] != 0)
        {
            min = count[i];
            index = i;
        }
    }
    return index;
}

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

string replaceCharacters(string str, char charToReplace, char replacingChar)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == charToReplace)
        {
            str[i] = replacingChar;
        }
    }
    return str;
}


int main()
{
    string str;
    int count[26] = { 0 };

    cout<<"Enter a string : ";
    getline(cin, str);

    findFrequencyOfCharacters(str, count);
    char occuringMax = 'a' + findMaxOccuringCharacter(count);
    char occuringMin = 'a' + findMinOccuringCharacter(count);

    str = replaceCharacters(str, occuringMax, occuringMin);
    cout<<"The string after modification is : "<<str<<endl;
    return 0;
}