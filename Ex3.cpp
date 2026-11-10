#include <iostream>
using namespace std;

const int MAX = 2;
int stack[MAX];
int top = -1;

void push(int stack[MAX])
{
    if(top == MAX-1) {cout << "Overflow" << endl; return;}
    cout << "Tell the value" << endl;
    int value;
    cin >> value;
    top++;
    stack[top] = value;
    cout << "Value Succesfully Added" << endl;
}

void pop(int stack[MAX])
{
    if(top == -1) {cout << "Underflow" << endl; return;}
    top--;
    cout << "Value Succesfully Deleted" << endl;
}

void display(int stack[MAX])
{
    if(top == -1) {cout << "Stack is empty" << endl; return;}
    cout << "The Value at top is :" << stack[top] << endl;
}

int main()
{
    int choice;
    while( choice != -1)
    {
        cout<< "1. Push |  2. Pop  |  3. Display  | 4. Exit" << endl;
        cout << "Enter Choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push(stack);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            display(stack);
            break;
        case 4:
            cout << "Exiting" << endl;
            return 0;
        
        default:
            break;
        }
        
    }
}
