#include <iostream>
using namespace std;

// Structure of Node
struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;

    int value;
    int count = 0;

    // Create five nodes
    for (int i = 1; i <= 5; i++)
    {
        newNode = new Node;

        cout << "Enter value for node " << i << ": ";
        cin >> value;

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Display linked list
    cout << "\nLinked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Display total nodes
    cout << "Total Nodes: " << count << endl;

    // Delete nodes to free memory
    temp = head;

    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}
