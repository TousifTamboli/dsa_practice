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

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp -> next;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
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
    
    insertAtHead(head, 25);
    print(head);

    insertAtPosition(head, tail, 30, 2);
    print(head);



}