
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;     // next is  a ptr which will point to the next node 

    Node(){
        this -> data = 0;
        this -> next = NULL;
    }

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAtHead(Node *&head, int d){
// CREAte new node 
    Node *n2 = new Node(d);
    n2->next = head;
    head = n2;
}



void InsertAtEnd(Node* &head, int d){

    // Node created 
    Node* n2 = new Node(d);

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = n2;
}
//          OPTIMISED
void InsertAtTail(Node* &tail, int d){
    cout << endl << "Addresses of TAIL: "<< tail << "   ";

    // Node created 
    Node* n2 = new Node(d);
    cout << n2 << "     ";

// point tail to the next node 
    tail->next = n2;

// cut the link of tail from prev to the next ending node
    tail = n2;
//      OR
    // tail = tail -> next;

    cout << tail << endl << endl ;    
}



void InsertAtPos(Node* &head,Node* &tail,  int pos, int d){

    // CREATE NODE
    Node* n2 = new Node(d);

    if(pos == 1){
        n2 -> next = head;
        head = n2;
        return;
    }
//      OR {OPTIMISED}
    if(pos == 1){
        InsertAtHead(head,d);
        return;
    }


    Node* temp = head;

    int i = 1;
    // while(i<pos-1){
//      OR
    while(i != pos-1){
        temp = temp -> next;
        i++;
    }

    if(temp-> next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    n2->next = temp -> next;
    temp -> next = n2; 
}



void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data ;
        cout << "("<< temp  << ") ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){

    // Node n1 = new Node()
    // Node* n1 = new Node();
    // cout << n1->data << endl;
    // cout << n1->next  << endl;
    // n1->data = 10;
    // n1->next = NULL; 

    Node *head = NULL;

    Node *n1 = new Node(1);
    // cout << n1->data << endl;
    // cout << n1->next  << endl; 

// HEAD is pointing / containing the address of n1
    cout << n1 << endl << endl;
    head = n1;
    cout << head << endl << endl;

    print(head);

    InsertAtHead(head,2);

    print(head);

    InsertAtHead(head,3);
    print(head);

    InsertAtEnd(head,4);
    print(head);
    InsertAtEnd(head,5);
    print(head);

    Node* tail = head;
    InsertAtTail(tail,6);
    print(head);
    InsertAtTail(tail,7);
    print(head);
    InsertAtTail(tail,8);
    print(head);


    InsertAtPos(head,tail,2,9);
    print(head);
    InsertAtPos(head,tail,2,10);
    print(head);
    InsertAtPos(head,tail,1,11);
    print(head);

// U HAVE TO UPDATE TAIL
    InsertAtPos(head,tail,8,12);
    print(head);


    cout << "Head: " << head-> data << endl; 
    cout << "Tail: " << tail-> data << endl; 
    // Node *n2 = new Node(24); 

    return 0;
    
}



