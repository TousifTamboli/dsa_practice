#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* createLinkedList(int arr[], int size) {
    ListNode* dummy = new ListNode(0); // Dummy node
    ListNode* tail = dummy; // Pointer to track the last node

    for (int i = 0; i < size; i++) {
        tail->next = new ListNode(arr[i]); // Create new node and attach
        tail = tail->next; // Move tail to the newly added node
    }

    return dummy->next; // Return the real head (ignoring dummy)
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createLinkedList(arr, size);
    printList(head); // Output: 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    return 0;
}
