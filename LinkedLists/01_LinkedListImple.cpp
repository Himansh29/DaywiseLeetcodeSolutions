
#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int val;
    Node *next;

    Node(int val){
      this->val = val;
      this->next = NULL;
    }
};

void printLL(Node* head){
      Node* temp = head;

      while(temp) {
        cout << temp->val << " ";
        temp = temp->next;
      }
    }

    int length(Node* head){

      int len = 1;

      Node* temp = head;
      while(temp) {
        len++;
        temp = temp->next;
      }

      return len;
    }

void insertAtHead(Node* &head, Node* tail, int data){

  Node* temp = new Node(data);

  if(head == NULL) {
    head = temp;
    tail = temp;
  }

  temp->next = head;
  head = temp;
}

void insertAtEnd(Node* &head, Node* &tail, int data){

  Node* newNode = new Node(45);

  if(head == NULL) {
    newNode = head;
    newNode = tail;
    return;
  }

  tail->next = newNode;
  tail = newNode;
}

void insertAtIndex(Node* &head, Node* &tail, int data, int pos){
  int len = length(head);
  
  if(len < pos) return;

  Node* dummy = new Node(15);
  

  Node* temp = head;

  int i = 1;
  while(i < pos-1) {
    temp = temp->next;
    i++;
  }

  dummy->next = temp->next;
  temp->next = dummy;
}

int main()
{

  Node *first = new Node(10);
  Node *second = new Node(20);
  Node* third = new Node(30);

  Node* head = first;
  Node* tail = third;

  first->next = second;
  second->next = third;

  insertAtHead(head,tail, 5);
  insertAtEnd(head, tail, 45);
  insertAtIndex(head, tail, 15, 3);
  printLL(head);
  cout << endl;
  cout << "Printing tail " << tail->val << endl;
  cout << length(head);
  
    return 0;
}