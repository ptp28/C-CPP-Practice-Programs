/* Accept a character and classify it as a letter, number or special character (using if). If the character is a letter then identify if it is a vowel or a consonant (using switch case) */

#include<iostream>
using namespace std;

void checkCharacter(char character)
{
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        cout<<"The character is a letter"<<endl;
        switch(character)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout<<"The letter is a vowel"<<endl;
                break;
            default:
                cout<<"The letter is a consonant"<<endl;
                break;
        }
    }
    else if(character >= '0' && character <= '9')
    {
        cout<<"The character is a number"<<endl;
    }
    else
    {
        cout<<"The character is a special character"<<endl;
    }  
}

int main()
{
    char character;
    cout<<"Enter a character : ";
    cin>>character;
    
    checkCharacter(character);
    return 0;  
}

























