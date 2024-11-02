#include "gtest/gtest.h" // Include the Google Test framework header
#include "node.h" // Include the header file that contains the declarations for Node, createNode, insertEnd, and displayList

// Test case to verify inserting positive values into the linked list
TEST(InsertEndTest, PositiveValues) {
    Node* head = nullptr; // Initialize the linked list as empty

    insertEnd(&head, 10); // Insert the value 10 into the list
    EXPECT_EQ(head->data, 10); // Check if the head node's data is 10

    insertEnd(&head, 20); // Insert the value 20 into the list
    EXPECT_EQ(head->next->data, 20); // Check if the next node's data is 20
}

// Test case to verify handling of negative values
TEST(InsertEndTest, NegativeValue) {
    Node* head = nullptr; // Initialize the linked list as empty
    // Check if inserting a negative value throws an invalid_argument exception
    EXPECT_THROW(insertEnd(&head, -10), std::invalid_argument);
}

// Test case to verify handling of duplicate values
TEST(InsertEndTest, DuplicateValue) {
    Node* head = nullptr; // Initialize the linked list as empty

    insertEnd(&head, 10); // Insert the value 10 into the list
    // Check if inserting a duplicate value throws an invalid_argument exception
    EXPECT_THROW(insertEnd(&head, 10), std::invalid_argument);
}
 