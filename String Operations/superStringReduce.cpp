/* Reduce a string of lowercase characters in range ascii[‘a’..’z’]by doing a series of operations. In each operation, select a pair of adjacent letters that match, and delete them.
Delete as many characters as possible using this method and return the resulting string. If the final string is empty, return 'Empty String'.

I/P: aab 
O/P : b
Explaination : string shortens to b in one operation: remove the adjacent a characters.

I/P: aaabccddd 
O/P : abd
Explaination : aaabccddd -> abccddd -> abddd -> abd

*/
#include<iostream>
using namespace std;


string superReducedString(string s) {
    int removed = 0;
    int i;
    int len;
    do
    {
        removed = 0;
        len = s.length();
        for(i=0; i<len-1;i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i,2);
                removed++;
                break;
            }
        }
    }while(removed != 0);
    if(s.length() == 0)
        return "Empty String";
    return s;
}

int main()
{
    cout<<"aaabccddd -> "<<superReducedString("aaabccddd")<<endl;
    cout<<"baab -> "<<superReducedString("baab")<<endl;
    cout<<"aa -> "<<superReducedString("aa")<<endl;
    cout<<"caca -> "<<superReducedString("caca")<<endl;
    cout<<"d -> "<<superReducedString("d")<<endl;
    return 0;
}