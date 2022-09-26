

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

Node *top;

void push(int data)
{

    Node *temp = new Node();
    // if (!temp) {
    //     cout << "\nStack Overflow";
    //     exit(1);
    // }

    temp->data = data;

    temp->link = top;

    top = temp;
}

int isEmpty()
{
    return top == NULL;
}

int peek()
{

    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

int pop()
{
    Node *temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {
        int a;
        a=top->data; 
        temp = top;

        top = top->link;

        free(temp);
        return a;
    }
}

void display()
{
    Node *temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            cout << temp->data << "-> ";

            temp = temp->link;
        }
    }
}

int main()
{

    push(11);
    push(22);
    push(33);
    push(44);

    display();

    cout << "\nTop element is "
         << peek() << endl;

    cout<<pop()<<endl;
    cout<<pop()<<endl;

    display();

    cout << "\nTop element is "
         << peek() << endl;

    return 0;
}
