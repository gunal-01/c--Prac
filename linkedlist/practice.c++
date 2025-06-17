#include<bits/stdc++.h>
using namespace std;

// Define a structure for a Node in the linked list
class Node {
    public:
    int data; // Data stored in the node
    Node* next; // Pointer to the next node in the linked list

    // Constructor to initialize a node with data and a pointer to the next node
    public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor to initialize a node with data and set the next pointer to nullptr
    public:
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert a vector into a linked list
Node* convertArr2LL(vector<int> &arr) {
    // Create the head node using the first element of the vector
    Node* head = new Node(arr[0]);
    Node* mover = head; // Pointer to traverse and build the linked list

    // Loop through the rest of the vector to create and link nodes
    for(int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create a new node for the current element
        mover->next = temp; // Link the current node to the new node
        mover = temp; // Move the pointer to the new node
    }

    return head; // Return the head of the linked list
}

int main() {
    // Initialize a vector with some integers
    vector<int> arr = {99, 4, 5, 6, 3};

    // Convert the vector into a linked list
    Node* head = convertArr2LL(arr);

    // Print the data of the head node
    cout << head->data;

    return 0;
}