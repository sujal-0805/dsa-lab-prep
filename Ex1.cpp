#include <iostream>
using namespace std;
 const int MAX = 100;
 int arr[MAX] ;
 int n = 0;

 void create()
 {
    cout << "Enter Array Size" << endl;
    cin >> n;
    cout << "Enter Array Elements" << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array created succesfully" << endl ;
 }
 void display()
 {
    cout << "Following Array is :" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Array Displayed";
 }
 void insertion()
 {
    int pos, val;
    cout << "Enter position" << endl;
    cin >> pos;
    cout << "Enter Value" << endl;
    cin >> val;
    for(int i = n-1; i >= pos ; i-- )
    {
        arr[i+1] = arr[i];
    }
    n++;
    arr[pos] = val;
    cout << "Succesfully Inserted" << endl;
 }

 void del()
 {
    int pos;
    cout << "Enter position" << endl;
    cin >> pos;
    for(int i = pos; i <n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    cout << "Succesfully deleted at position" << endl;
    
 }
 int main ()
 {
    int choice;
    do
    {
        cout << "1. Creation  ||  2. Display  ||  3.Insertion  || 4.Deletion  || 5. Exit " << endl;
         cout << "Enter choice"<< endl;
        cin >> choice;
        switch(choice) {
            case 1 : create();
                     break;
            case 2 : display();
                     break;         
            case 3 : insertion();
                     break; 
            case 4 : del();
                     break;
            case 5 : cout << "Exiting";
                     break;
            default : cout << "Invalid Choice" << endl;
                     break;                   
        }

    } while (choice != 5);
    return 0;
 }