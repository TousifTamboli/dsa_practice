#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
        
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

int main(){
    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;
    print(head);

    insertAtHead(head, 15);
    print(head);
    
    insertAtHead(head, 20);
    print(head);

    insertAtTail(tail, 25);
    print(head);


}