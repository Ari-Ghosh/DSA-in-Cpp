#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        //constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;

        }

        ~Node(){
            int value = this -> data;

            while(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << " memory is free for node with data " << value << endl;
        }
};

void insertAtStart(Node* &head, int val){

    Node* temp = new Node(val);
    temp -> next = head;
    head = temp;

}

void printTraverse(Node* &head){
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;
    while (temp != NULL){
        cout<<temp -> data<<"\t";
        temp = temp -> next;
    }

}

void insertAtEnd(Node* &head, int val){

    Node* temp = head;

    Node* newNode = new Node(val);

    while( temp->next != NULL){
        temp = temp -> next;
    }

    temp -> next = newNode;
}

void insertAtPosition(Node* &head, int position, int val){

    Node* temp = head;
    int c = 1;

    while(c < position-1){
        temp = temp -> next;
        c++;
    }

    Node* newNode = new Node(val);

    newNode -> next = temp -> next;

    temp -> next = newNode;
}

void deleteNode(Node* &head, int position){
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }

    Node* temp = head;
    int c = 1;

    while(c < position-1){
        temp = temp -> next;
        c++;
    }

    temp -> next = temp -> next -> next;
    delete temp;
}

bool detectLoop(Node* head){

    if(head == NULL)
        return false;

    map <Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){

        if(visited[temp] == true){
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
        
    }
    return false;
}

Node* floydLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout << "present at " << slow -> data << endl;
            return slow;
        }
    }

    return NULL;

}

Node* getStartLoop(Node* head){
    if(head == NULL)
        return NULL;

    Node* intersection = floydLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop( Node* &head ){
    if( head == NULL )
        return ;

    Node* start = getStartLoop(head);

    Node* temp = start;

    while(temp -> next != start){
        temp = temp -> next;
    }

    temp -> next = NULL;
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    Node* head = node1;

    printTraverse(head);
    cout<<endl;

    insertAtStart(head, 12);
    printTraverse(head);
    cout<<endl;

    insertAtEnd(head, 23);
    printTraverse(head);
    cout<<endl;

    insertAtPosition(head, 2, 56);
    printTraverse(head);
    cout<<endl;

    deleteNode(head, 1);
    printTraverse(head);
    cout<<endl;

    Node* head = node1; 
    Node* tail = node1;

    tail -> next = head ->next;

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    //print(head);

    if(floydLoop(head) != NULL) {
        cout << "Cycle is present " << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    Node* loop = getStartLoop(head);

    cout << "loop starts at " << loop -> data  << endl;

    removeLoop(head);
    printTraverse(head);

    /*
    print(head);

    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
    */

}