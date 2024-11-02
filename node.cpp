#include "node.h" // Include the header file that contains the declarations for Node, createNode, insertEnd, and displayList

// Function to create a new node with the given value
Node* createNode(int value) {
    Node* newNode = new Node; // Dynamically allocate memory for a new node
    newNode->data = value; // Set the data of the node to the given value
    newNode->next = nullptr; // Initialize the next pointer to nullptr
    return newNode; // Return the newly created node
}

// Function to insert a node with the given value at the end of the list
void insertEnd(Node** head, int value) {
    // Check if the value is negative and throw an exception if so
    if (value < 0) {
        throw std::invalid_argument("Negative values are not allowed in the list.");
    }

    Node* newNode = createNode(value); // Create a new node with the given value

    // If the list is empty, make the new node the head of the list
    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    Node* temp = *head; // Start from the head of the list

    // Traverse to the end of the list, checking for duplicates
    while (temp->next != nullptr) {
        if (temp->data == value) { // Check for duplicate values
            throw std::invalid_argument("Duplicate values are not allowed in the list.");
        }
        temp = temp->next; // Move to the next node
    }

    // Final duplicate check for the last node
    if (temp->data == value) {
        throw std::invalid_argument("Duplicate values are not allowed in the list.");
    }

    temp->next = newNode; // Point the last node's next to the new node
}

// Function to display the elements of the list
void displayList(Node* head) {
    // Traverse the list and print each node's data
    while (head != nullptr) {
        std::cout << head->data << " "; // Print the data of the current node
        head = head->next; // Move to the next node
    }
    std::cout << std::endl; // Print a newline at the end
}
