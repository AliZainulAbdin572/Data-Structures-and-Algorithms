#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    // Create five nodes dynamically
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // Take input from user
    cout << "Enter five values: ";

    cin >> first->data;
    cin >> second->data;
    cin >> third->data;
    cin >> fourth->data;
    cin >> fifth->data;

    // Connect the nodes
    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = fifth;

    fifth->prev = fourth;
    fifth->next = NULL;

    // Forward Traversal
    cout << "\nForward Traversal: ";

    Node* temp = first;
    int count = 0;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Backward Traversal
    cout << "\nBackward Traversal: ";

    temp = fifth;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;

    // Display total nodes
    cout << "\nTotal Nodes: " << count << endl;

    // Delete dynamically created nodes
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
