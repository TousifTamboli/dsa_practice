#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
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

void print(Node* head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next; 
    }
    cout<<endl;
}

int main(){

    //creating a new node
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    Node* head = node1;
    print(head);
   
    insertAtHead(head, 12);
    print(head);

    return 0;

}