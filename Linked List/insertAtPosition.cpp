#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int d){
    //create a new node temp
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* tail, Node* head, int pos, int data){

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

    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* tail = node1;
    Node* head = node1;

    insertAtTail(tail, 12);
    print(head);
    
    insertAtTail(tail, 15);
    print(head);
    
    insertAtTail(tail, 20);
    print(head);

    insertAtPosition(tail, head, 2, 25);
    print(head);



}