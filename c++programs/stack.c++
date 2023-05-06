#include<iostream>
using namespace std;
#define S 7

int stack[S];
int top=-1;

void push()
{
    int x;
    cout << "Enter data:";
    cin >> x;
    if(top==S-1)
    {
        cout << "Overflow";
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int element;
    if(top==-1)
    {
        cout << "Underflow";
    }
    else
    {
        element =stack[top];
        top--;
        cout << element << endl;
    }
}

void peek()
{
    if(top==-1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << stack[top] << endl;
    }
}

void display()
{
    int i;
    for(i=top; i>=0; i--)
    {
        cout << stack[i] << "\t";
    }
}

int main()
{
    int number;
   
    do
    {
        cout << "\nEnter number choice for operation: ";
        cin >> number;
        switch(number)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 0:
            cout << "Exiting program\n";
            break;
            default:
            cout << "Invalid choice\n";
        }
    }while(number!=0);
    return 0;
}