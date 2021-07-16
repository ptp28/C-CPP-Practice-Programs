/* There is a string, s, of lowercase English letters that is repeated infinitely many times. Given an integer, n, find and print the number of letter a's in the first n letters of the infinite string.
Example:
I/P: s => "abcac", n => 10
O/P: 4
EXPLAINATION => The substring we consider is "abcacabcac", the first 10 characters of the infinite string. There are 4 occurrences of a in the substring.
I/P: s => "aba", n => 10
O/P: 7
EXPLAINATION => The substring we consider is "abaabaabaa", the first 10 characters of the infinite string. There are 7 occurrences of a in the substring.
I/P: s => "a", n => 1000000000000
O/P: 1000000000000
*/

#include<iostream>
using namespace std;

long repeatedString(string s, long n) {
    long pass1Count = 0;
    long totalCount = 0;
    long remainderCount = 0;
    
    for(long i=0; i<s.length(); i++) {
        if(s[i] == 'a') {
            pass1Count++;
        } 
    }
    
    long numberOfPasses = n / s.length();
    long numberOfRemainders = n % s.length();
    
    for(long i=0; i<numberOfRemainders; i++)
    {
        if(s[i] == 'a') {
            remainderCount++;
        }
    }
    
    totalCount = (pass1Count * numberOfPasses) + remainderCount;
    
    return totalCount;
}

int main()
{
    cout<<"aba -> "<<repeatedString("aba", 10)<<endl;
    cout<<"a -> "<<repeatedString("a", 1000000000000)<<endl;
    cout<<"abcd -> "<<repeatedString("abcd", 17)<<endl;
    cout<<"p -> "<<repeatedString("p", 100)<<endl;
    cout<<"taramasalata -> "<<repeatedString("taramasalata", 24)<<endl;
    return 0;
}