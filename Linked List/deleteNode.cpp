#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free with data "<<value<<endl;
    }
};

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void deleteNode(int pos, Node* &head){
    //position is on first
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
    } else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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

    print(head);

    insertAtTail(tail, 12);
    insertAtTail(tail, 15);
    insertAtTail(tail, 20);

    print(head);

    deleteNode(3, head);
    print(head);


    return 0;
}