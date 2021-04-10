/* There is a sequence of words in CamelCase as a string of letters, s , having the following properties:
It is a concatenation of one or more words consisting of English letters.
All letters in the first word are lowercase.
For each of the subsequent words, the first letter is uppercase and rest of the letters are lowercase.
Given s, determine the number of words in s. For example -
I/P: oneTwoThree
O/P: 3
I/P: saveChangesInTheEditor
O/P: 5
*/

#include<iostream>
using namespace std;

int camelCaseWordCouter(string s) {
    int wordCount = 1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            wordCount++;
        }
    }
    return wordCount;
}

int main()
{
    cout<<"oneTwoThree has "<<camelCaseWordCouter("oneTwoThree")<<" words"<<endl;
    cout<<"saveChangesInTheEditor has "<<camelCaseWordCouter("saveChangesInTheEditor")<<" words"<<endl;
    return 0;
}
