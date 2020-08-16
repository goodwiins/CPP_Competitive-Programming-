#include <iostream>
using namespace std;



struct Node {
  int val;
  Node* next;

  Node(int val) {
    this -> val = val;
  }
};


void print_list(Node* head){
    struct Node* pCrawl = head;
    cout << " -> ";
    while (pCrawl != NULL){
        cout << (pCrawl -> val) << "->";
        pCrawl = pCrawl -> next;
    }
cout << "\n";
}

void insert_at_head(Node* &head,int val){
    if (head == NULL){
        head = new Node(val);
        return;
    }
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;
}
// bool search(Node* &head,int val){
//     struct Node* pCrawl = head;
//     while (pCrawl == NULL){
//         if (pCrawl->val = val)
//             return true;
//         pCrawl = pCrawl-> next;
//     }
//     return false;
// }

void insert_at_end(Node* &head, int val) {
  // List is empty
  if (head == NULL) {   
    head = new Node(val);
    return ;
  } 
  struct Node* pCrawl = head;
  while(pCrawl->next != NULL) {        // iterate to last node
    pCrawl =  pCrawl -> next;
  }
  pCrawl -> next = new Node(val);
}
void insert_at_position(Node* &head, int val,int pos){
    struct Node* pCrawl = head;
    for (int i =0 ; i < pos -1;i++)
        pCrawl = pCrawl -> next;
    Node* A = pCrawl;
    Node* B = pCrawl->next;
    Node* C = new Node(val);
    A-> next = C;
    C->next = B;
}
void delete_head(Node* &head){
    Node* temp = head;
    head = head->next;
    delete temp;
}
void delete_at_position(Node* &head, int pos){
  struct Node* A = head;
  for (int i=0; i < pos - 1; i++){
    A = A->next;
  }
  Node *c = A->next;
  Node *b = A->next->next;
  A->next = b;
  delete c;


}
int main(){
    Node* head = NULL;
    

  insert_at_end(head, 1); 
  insert_at_end(head, 2); 
  insert_at_end(head, 3); 
  insert_at_end(head, 4); 
  insert_at_end(head, 5);

  print_list(head);
  delete_at_position(head, 2); print_list(head);  // 0-based position
  delete_at_position(head, 3); print_list(head);  
}