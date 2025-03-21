#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;     // next is a ptr which points to the next node... i.e its gonna conatain value of a complete Node ... so ...next is pointer of Node Datatype  

    Node(int data){         // Whenever a node is created ... this CONSTRUCTOR is called 
        this -> data = data;
        // this -> next = NULL;
    }


    // Destructor
    ~Node(){
        int val = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "MEmory Freed for node with data " << val << endl;
    }
};

void InsertAtHead(Node* &head, int d){      // &head  taken rather than noramal head so as to not make a separte copy of head

    // new node create
    Node* temp = new Node(d);   // temp naam ka ek naya node craete hoga 

    // temp will craete a new node with data ad null ... now coonect it to the head
    temp->next = head;  // new node is pointing to the head of the list

    // Head ko wapas laake samne lagao
    head = temp;    // temp ko ab head bana do 

}


void InsertAtTail(Node* &tail, int d){

    // create a new temp node
    Node* temp = new Node(d);
    if (tail == nullptr) {
          // Issue: If list is empty, tail is set, but head should be updated too
        tail = temp;
        return;
    }
    
    // Ab temp ko peche lagao
    // By Default tail jahan pe hogi wahan pe lagega
    tail->next = temp;

    // Ab tail ko peche karo
    tail = temp;
    // OR
    // tail = tail -> next
}

void InsertAtPosition(Node* &head, Node* &tail, int pos, int d){       // head is a ptr ... which is going to store add of a complete Node, not of a integer only 

    if(pos==1){
        InsertAtHead(head,d);
        if (tail == nullptr) {  // If the list was empty before insertion
            tail = head;  // Head and tail should be the same
        }
        return;
    }
// OR
    // if(pos==1){
    //     Node* nodeToInsert = new Node(d);
    //     nodeToInsert->next = head;
    //     head = nodeToInsert;
    //     return;
    // }

    // if(len == pos-1){
    //     InsertAtTail(tail,d);
    // }

    // Point temp to head .. helpful for count 
    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1 && temp != nullptr){     // 3rd pos mein dalega to ek step chalega bas i.e 2nd node ko jayega ... as it is already in the first position
        temp = temp->next;  // temp is moving to the next node ... till it reaches
        cnt++;
    }

    // after insertion of node ... we do have to update the tail
    if(temp -> next == NULL){
        InsertAtTail(tail,d);
        return;
    }

    // Ab pahunch gaye ho tum

    // Now create the node to insert 
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;

}


void DeleteNode(Node* &head, int pos){

    // Deleting First Position 
    if(pos == 1){
        Node* current = head;  // taki iski memori free kar sake
        head = head->next;

        current-> next = NULL;
        // MEMORY FREE of starting node
        current -> next = NULL;
        delete current;
        // return;
    }
    else{
        // Deleting any Middle or LAST NODE

        // Create 2 ptr's ... cureent and previous
        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        
        while (cnt < pos && current != nullptr){
            // pehele prev ko current ke jagah pe lao
            previous = current;
            // then current ko age badhao
            current = current -> next;

            cnt++;
        }

        if (current == nullptr) return;  // Position out of bounds

        // This wroks for both any positioned as well as for last node 
        previous -> next = current -> next;

        // MEMORY FREE
        current -> next = NULL;
        delete current;

    }
}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
// creating a newnode on the heap i.e Node *
    // Node* node1 = new Node();   // dynamically creating a node 
    Node* node1 = new Node(10);   // dynamically creating a node 

    // node1->data = 10;            // assigning value to the node
    // node1->next = NULL;          // assigning NULL to the next pointer of the node

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    // head pointed to node1
    Node* head = node1;     // head is a ptr whuch points to node1


    // tail naam ka ek ptr node1 ko point karo ... wahan se sab kuch karyakaram hoga
    Node* tail = node1;

    
    print(head);

    InsertAtHead(head,12);
    print(head);

    print(tail);

    InsertAtTail(tail,122);
    InsertAtPosition(head,tail,3,124);
    InsertAtPosition(head,tail,1,1);
    InsertAtPosition(head,tail,1,13);

    InsertAtPosition(head,tail,7,96);       // End mein dalna 
    // InsertAtPosition(head,tail,10,968);

    print(head);

    DeleteNode(head, 1);
    print(head);
    DeleteNode(head, 3);
    print(head);
    

    cout << "HEAD -> " << head -> data << endl;
    cout << "TAil -> " << tail -> data << endl;

    return 0;
}

























































#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        // this.data = data;
        // this.(*next) = NULL;
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int data){
    Node* temp = new Node(data);    
    // temp will craete a new node with data ad null ... now coonect it to the head
    temp-> next = head;
    // Head ko wapas laake samne lagao
    head = temp;
}


void print(Node* &head){
    // Node* temp = new Node();
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    // Node* node1 = new Node();
    Node* node1 = new Node(10);

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    
    Node* head = node1;



    


 
    return 0;
}




























