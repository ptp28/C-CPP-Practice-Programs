/* Implement array as a stack. Create a menu driven program which includes functions to push, pop, empty stack, display stack and check if the stack is empty/full. */

#include<iostream>
using namespace std;

int isEmpty(int count)
{
    if(count == 0)
    {
        cout<<"The stack is empty."<<endl;
        return 1;
    }
    return 0;
}

int isFull(int count)
{
    if(!(count < 100))
    {
        cout<<"The stack is full."<<endl;
        return 1;
    }
    return 0;
}

void stackPush(int arrayStack[], int &count)
{
    int data;
    cout<<"Enter a number to push to the stack : ";
    cin>>data;

    if(!isFull(count))
    {
        for(int i=count-1; i>=0; i--)
        {
            arrayStack[i+1] = arrayStack[i];
        }
        arrayStack[0] = data;
        count++;
    }
}

void stackPop(int arrayStack[], int &count)
{
    int poppedElement = arrayStack[0];
    
    if(!isEmpty(count))
    {
        for(int i=0; i<count; i++)
        {
            arrayStack[i] = arrayStack[i+1];
        }
        count--;
    }
    cout<<poppedElement<<" was popped from the stack."<<endl;
}

void emptyStack(int arrayStack[], int &count)
{
    while(!isEmpty(count))
    {
        stackPop(arrayStack, count);
    }
}

void displayStack(int arrayStack[], int count)
{
    if(!isEmpty(count))
    {
        cout<<"The current stack contains :- "<<endl;
        for(int i=0; i<count; i++)
        {
            cout<<arrayStack[i]<<endl;
        }
        cout<<endl;
    }
    else
    {
        cout<<"The current stack is empty."<<endl;
    }
}

int main()
{
    int choice;
    int arrayStack[100];
    int count = 0;

    do
    {
        cout<<"*** Stack operations ***"<<endl;
        cout<<"1. Display the stack"<<endl;
        cout<<"2. Push to stack"<<endl;
        cout<<"3. Pop from stack"<<endl;
        cout<<"4. Empty the stack"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                displayStack(arrayStack, count);
                break;
            case 2:
                stackPush(arrayStack, count);
                break;
            case 3:
                stackPop(arrayStack, count);
                break;
            case 4:
                emptyStack(arrayStack, count);
                break;
            case 5:
                break;
            default:
                cout<<"Wrong choice entered."<<endl;
                break;
        }
    }while(choice != 5);
}