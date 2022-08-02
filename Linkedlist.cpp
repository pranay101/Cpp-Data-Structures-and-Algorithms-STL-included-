#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *next;
};

struct LinkedList
{
    unsigned int length = 0;
    struct Node *head = NULL;
    struct Node *tail = NULL;
};

struct LinkedList *linked_list = new LinkedList;

void display()
{
    if (!linked_list->head)
    {
        cout << "\n\nLinked linked_list is empty!!";
        return;
    }
    cout << "\n\n";
    struct Node *temp = linked_list->head;
    while (temp != NULL)
    {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return;
}

void shift(int value)
{
    struct Node *newNode = new Node;
    newNode->val = value;
    newNode->next = linked_list->head;
    if (linked_list->head == NULL)
    {
        linked_list->tail = newNode;
        linked_list->head = newNode;
    }
    linked_list->head = newNode;
    linked_list->length++;
    cout << value << " Has been inserted successfully!!";
    return;
}

void append(int value)
{
    struct Node *newNode = new Node;
    newNode->val = value;
    newNode->next = NULL;
    if (linked_list->tail == NULL)
    {
        linked_list->head = newNode;
        linked_list->tail = newNode;
    }
    else
    {
        linked_list->tail->next = newNode;
        linked_list->tail = newNode;
    }
    linked_list->length++;
    cout << value << " Has been inserted successfully!!";
    return;
}

void unshift()
{
    if (!linked_list->head)
    {
        cout << "\n\nThe list is empty!!";
        return;
    }
    else
    {
        linked_list->head = linked_list->head->next;
        linked_list->length--;
        return;
    }
}

void pop()
{
    if (linked_list->head == NULL)
    {
        cout << "\n\nThe list is empty!!";
        return;
    }
    struct Node *temp = linked_list->head;
    while (temp->next != linked_list->tail)
    {
        temp = temp->next;
    }
    linked_list->tail = temp;
    linked_list->tail->next = NULL;
    linked_list->length--;
    return;
}

void length()
{
    cout << "\n\nThe length of the list is:" << linked_list->length;
    return;
}

void reverse()
{
    struct Node *curr = linked_list->head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    struct Node *first = curr;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    linked_list->head = prev;
    linked_list->tail = first;
    display();
    return;
}

void insertAt(int data, int pos)
{
    if (linked_list->head == NULL)
    {
        append(data); return;
    }

    struct Node *temp = linked_list->head;
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }
    struct Node *newNode = new Node;
    newNode->val = data;
    newNode->next = temp->next;
    temp->next = newNode;
    linked_list->length++;
    cout << data << " Has been inserted successfully!!";
    return;
}

void insertINC(int data){
    if(data >= linked_list->tail->val)
    {
        append(data);
        cout<<"1";
        return;
    }
    if (data <= linked_list->head->val)
    {
        shift(data);
        cout<<"2";
        return;
    }
    
    struct Node *temp = linked_list->head;
    cout<<"3";

    while(temp->next != NULL && temp->next->val < data){
        temp = temp->next;
    }
    
    struct Node *newNode = new Node;
    newNode->val = data;
    newNode->next = temp->next;
    temp->next = newNode;
    linked_list->length++;
    return;

}

int main()
{
    struct Node *head = NULL;

    for (int i = 0; i < 10; i+=2)
        append(i);

    char choice;
    while (choice != 'E' || choice != 'e')
    {

        int data;
        int position;
        cout << "\nThe Following operations: ",
            cout << "\n  'S' to Add data from the begining. ",
            cout << "\n  'A' to Add data at the end.",
            cout << "\n  'I' to Add data after an element.",
            cout << "\n  'U' to remove Data from the Begining.",
            cout << "\n  'P' to remove Data from the end. ",
            cout << "\n  'R' to reverse the linked list. ",
            cout << "\n  'D' to print the list.",
            cout << "\n  'L' to print the length of the list.",
            cout << "\n  'X' to insert element in increasing order.",
            cout << "\n  'E' to Exit",
            cout << "\n",
            cout << "\nEnter your Choice: ",
            cin >> choice;
        switch (choice)
        {
        case 'S':
        case 's':
        {
            cout << "\nEnter the data: ";
            cin >> data;
            shift(data);
            break;
        }
        case 'A':
        case 'a':
        {
            cout << "\nEnter the data: ";
            cin >> data;
            append(data);
            break;
        }

        case 'X':
        case 'x':
        {
            cout << "\nEnter the data: ";
            cin >> data;
            insertINC(data);
            break;
        }
        case 'I':
        case 'i':
        {
            cout << "\nEnter the data: ";
            cin >> data;
            
            cout << "\n\nEnter the position: ";
            cin >> position;
            if (position > linked_list->length)
            {
                cout << "\n\nStupid its more than the length of list."; 
                break;
            }
            insertAt(data,position);
            break;
        }

        case 'D':
        case 'd':
        {
            display();
            break;
        }

        case 'P':
        case 'p':
        {
            pop();
            break;
        }

        case 'U':
        case 'u':
        {
            unshift();
            break;
        }

        case 'L':
        case 'l':
        {
            length();
            break;
        }

        case 'E':
        case 'e':
        {
            exit(0);
            break;
        }
        case 'R':
        case 'r':
        {
            reverse();
            break;
        }

        default:
            cout << "Wrong Choice!!";
            break;
        }
    }
    return 0;
}