#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data) {
        this -> data = data;
        this -> next = NULL;
        }
};

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

Node* reverse(Node* head){
    if(head == NULL || head -> next == NULL)
        return head;
    
    Node* newHead = reverse(head -> next);
    head -> next -> next = head;
    head -> next = NULL;

    return newHead;
}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(5);
    Node* third = new Node(6);
    Node* fourth = new Node(23);
    Node* fifth = new Node(8);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    print(head);

    Node* newHead = reverse(head);

    print(newHead);

    return 0;
}