/* Write a program to reverse a string using recusion. 
For example - 
I/P : Hello World
O/P : dlroW olleH
*/

#include<iostream>
using namespace std;

void reverseString(string &str, int lowerIndex, int higherIndex)
{
    char temp;
    if (lowerIndex < higherIndex)
    {
        temp = str[lowerIndex];
        str[lowerIndex] = str[higherIndex];
        str[higherIndex] = temp;
        reverseString(str, lowerIndex + 1, higherIndex - 1);
    }
}

int main()
{
    string str;
    cout<<"Enter a sentence : ";
    getline(cin, str);

    reverseString(str, 0, str.length()-1);
    cout<<str<<endl;
    return 0;
}