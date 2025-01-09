// #include<bits/stdc++.h>
// using namespace std;

// struct Node {
//     public:
//         int data; // these are the objects in the self defined class
//         Node* next; // these are the objects in the self defined class
    
//     public:
//         Node(int data1, Node* next1) {
//             data = data1;
//             next = next1;
//         };
// };


// int main() {
//     vector<int> arr = {2,5,8,7};
//     Node* y = new Node(arr[0], nullptr);
//     cout << y->data;
// }

//Above mentioned is for knowing how the address location is pointed
// and printed.



#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};


int main() {
    vector<int> arr = {1,2,3,4,5};
    //create the head node
    Node* head = new Node(arr[0]);

    //create the next node and link it to the head node
    head->next = new Node(arr[1]);

    //print the data of the head node.
    cout << "Data of head node: " << head->data << endl;

    //print the next element after the head node
    if(head->next != nullptr) {
        cout << "The next element after " << head->data <<  " is " << head->next->data << endl;
    } else {
        cout << "There is no next element after " << head->data << endl;
    }

    // clean up the allocated memory
    delete head->next;
    delete head;
    
    return 0;
}