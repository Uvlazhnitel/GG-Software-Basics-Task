#include "node.h" // Include the header file that contains the declarations for Node, createNode, insertEnd, and displayList

int main() {
    Node* head = nullptr; // Initialize the linked list as empty by setting the head pointer to nullptr

    std::cout << "Enter values for the list (0 to stop): "; // Prompt the user to enter values for the list
    int value; // Variable to store the user's input

    while (true) { // Start an infinite loop to continuously read input from the user
        std::cin >> value; // Read an integer value from the user
        if (value == 0) break; // If the user enters 0, break out of the loop to stop input
        
        try {
            insertEnd(&head, value); // Try to insert the value at the end of the list
        } catch (const std::invalid_argument& e) { // Catch any invalid_argument exceptions thrown by insertEnd
            std::cout << "Error: " << e.what() << std::endl; // Print the error message if an exception is caught
        }
    }

    std::cout << "Initial list: "; // Print a message indicating that the initial list will be displayed
    displayList(head); // Call the function to display the elements of the list

    return 0; // End of the program
}
