#include<iostream>
using namespace std;

const int MAX = 5;
int queue[MAX];
int front = -1;
int rear = -1;

void add(int queue[])
{
    if(rear == MAX-1)
    {
        cout << "Queue is full" << endl;
        return;
    }

    cout << "Enter Value" << endl;
    int value; cin >> value;

    if(rear == -1)
    {
        rear++;
        front++;
        queue[rear] = value;
        return;
    }
    rear++;
    queue[rear] = value;
}

void del(int queue[])
{
    if(front == -1 || front > rear)
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    int sup = queue[front];
    front++;
    cout << "Sucessfully removed of Queue which is : " << sup << endl; 
}

void display(int queue[])
{
    if(front ==-1 || front > rear)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    for(int i = front ; i<= rear ; i++)
    {
        cout << queue[i] << endl;
    }
}

int main()
{
    int choice;
    do
    {
        cout << "1. Add in Queue  ||  2. Delete  ||  3.Display  || 4. Exit " << endl;
         cout << "Enter choice"<< endl;
        cin >> choice;
        switch(choice) {
            case 1 : add(queue);
                     break;
            case 2 : del(queue);
                     break;         
            case 3 : display(queue);
                     break; 
            case 4 : cout << "Exiting";
                     break;
            default : cout << "Invalid Choice" << endl;
                     break;                   
        }

    } while (choice != 4);
    return 0;
}
