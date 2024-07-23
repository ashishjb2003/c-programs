#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int data)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

Node* insertAtBeginning(Node* head,int data)
{
    Node* newNode=createNode(data);
    if(!newNode) return head;
    newNode->next=head;
    return newNode;
}


void displaylist(Node* head){
    Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}


Node* merge(Node* head1,Node* head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp2;
    displaylist(head1);
}


int main()
{
    Node* head1=NULL;
    Node* head2=NULL;

    head1=insertAtBeginning(head1,10);
    head1=insertAtBeginning(head1,80);
    head1=insertAtBeginning(head1,20);
    head1=insertAtBeginning(head1,50);

    head2=insertAtBeginning(head2,50);
    head2=insertAtBeginning(head2,60);
    head2=insertAtBeginning(head2,90);
    head2=insertAtBeginning(head2,40);

    printf("Linkedlist 1 is :\n");
    displaylist(head1);

    printf("\n");

    printf("Linkedlisr 2 is :\n");
    displaylist(head2);

    merge(head1,head2);
}
