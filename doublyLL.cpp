#include<iostream>

using namespace std;

class Node {
    public:

    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp-> next;
    }
    cout << endl;
}

int getLength(Node* head) {
    Node* temp = head;
int len = 0;
    while(temp != NULL) {
        len++;
        temp = temp-> next;
    }
    return len;
}

void insertAtHead(Node* &head , int d) {

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node* Tail , int d){

    Node* temp = new Node(d);
    Tail -> next = temp;
    temp -> prev = Tail;
    Tail = temp;

}


int main(){

    Node* node1 = new Node(10);
    Node* head = node1;

    Node* Tail = node1;

    print(head);
    cout << endl;

    cout << getLength(head) << endl;
    

    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 17);
    print(head);

    insertAtTail(Tail , 24);
    print(Tail);

    return 0;
}