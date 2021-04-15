/* We say that a string contains the word 'programming' if a subsequence of its characters spell the word programming. Remeber that a subsequence maintains the order of characters selected from a sequence.
For each query, print YES on a new line if the string contains 'programming', otherwise, print NO. For example -
I/P: prroogggrammmmmminnnng
O/P: YES
I/P: prroogggraminnnng
O/P: NO 
(Second 'm' is missing)
I/P: jsdpdjfndriojaglkroiavbnfmmvming
O/P: YES
*/

#include<iostream>
using namespace std;

string programmingInString(string s) {
    string programming = "programming";
    int i, j=0;
    for(i=0; i<s.length(); i++)
    {
        if(s[i] == programming[j])
        {
            j++;
            if(j == programming.length())
            {
                return "YES";
            }
        }
    }
    return "NO";
}

int main()
{
    string str;
    cout<<"Enter a string to see if it contains a subsequence of the word 'programming' - "<<endl;
    cin>>str;
    cout<<programmingInString(str)<<endl;
    return 0;
}