#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
} Node;

Node* createNode(int data) {
  Node* newNode = (Node*)malloc(sizeof(Node));
  if (!newNode) {
    printf("Memory Allocation Failed\n");
    return NULL;
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

Node* insertAtBeginning(Node* head, int data) {
  Node* newNode = createNode(data);
  if (!newNode) return head;
  newNode->next = head;
  return newNode;
}

void displayList(Node* head) {
  Node* temp = head;
  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}

void DeleteFromBeg(Node** head_ref) {
    if (*head_ref == NULL) {
        printf("List is empty\n");
        return;
    }
    Node* temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}


void DeleteFromEnd(Node* head) {
  if (head == NULL) {
    printf("List is empty\n");
    return;
  }

  if (head->next == NULL) {
    free(head);
    head = NULL;

    return;
  }

  Node* temp = head;
  Node* prevNode = NULL;

  while (temp->next != NULL) {
    prevNode = temp;
    temp = temp->next;
  }

  prevNode->next = NULL;
  free(temp);
}

int main() {
  Node* head = NULL;
  int val;
  int num;

  head = insertAtBeginning(head, 10);
  head = insertAtBeginning(head, 20);
  head = insertAtBeginning(head, 30);

  printf("Linked list\n");
  displayList(head); 

  DeleteFromBeg(&head);
  printf("Deleted set from start:\t");
  displayList(head); 

  DeleteFromEnd(head);
  printf("Deleted set from end:\t");
  displayList(head); 

  return 0;
}

