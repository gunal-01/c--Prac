#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        
        // constructor to initialize a new node with data
        Node(int new_data) {
            data = new_data;
            next = nullptr;
        }
};

// Counts number of nodes in linked list
int countNodes(Node* head) {
    // Initialize count with 0
    int count = 0;
    
    // Initialie curr with head of linked list
    Node* curr = head;
    
    // Traverse till we reach nullptr
    
    while (curr != nullptr) {
        
        // Increment count by 1
        count++;
        
        // Move pointer to next node
        curr = curr->next;
    }
    
    return count;
}

// Driver code

int main()
{
    // Create a hard-coded linked list:
    // 1 -> 3 -> 1 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(1);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(1);
    
    // Function call to count the number of nodes
    cout << "Count of nodes is " << countNodes(head);
    return 0;
    
}