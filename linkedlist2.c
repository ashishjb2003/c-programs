#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;


Node* createNode(int data){
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("memory error\n");
        return NULL;
    }
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

Node* insertAtBeginning(Node* head,int data){
    Node* newNode=createNode(data);
    if(!newNode) return head;
    newNode->next=head;
    return newNode;
}

void displayList(Node* head){
    Node* temp=head;
    while(temp !=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int countList(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp !=NULL){
        cnt=cnt+1;
        temp=temp->next;
    }
    printf("%d",cnt);
    }
void largest(Node* head){
    Node* temp=head;
    int l=temp->data;
    while(temp!=NULL){
        if(l<temp->data){
            l=temp->data;
        }
        temp=temp->next;
    }
    printf("largest%d\n",l);
 }

 void smallest(Node* head){
    Node* temp=head;
    int s=temp->data;
    while(temp!=NULL){
        if(s>temp->data){
            s=temp->data;
        }
        temp=temp->next;
    }
    printf("smallest%d\n",s);
 }

int search(Node*head,int se){
    Node*temp=head;
    while(temp!=NULL)
    {
    	if(se==temp->data)
    	{
    		printf("element found"); 
    	}
        temp=temp->next;
    }
    printf("element not found");
    return 0;
}	
Node* delete(Node*head ,int data)
{
   Node*temp=head;
   Node*prev=NULL;
   if(temp!=NULL&&temp->data==data)
   {
       head=temp->next;
       free(temp);
       return head;
   } 
   while(temp!=NULL&& temp->data !=data)
   {
    prev=temp;
    temp = temp->next;
   }
    if(temp == NULL) 
    {return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
    
    
    }
	

int main(){
    Node* head=NULL;
    head=insertAtBeginning(head,10);
    head=insertAtBeginning(head,20);
    head=insertAtBeginning(head,30);
    printf("Linked List: ");
    displayList(head);
    int se;
    printf("enter the no:");
    scanf("%d",&se);
    search(head,se);
    countList(head);
    largest(head);
    smallest(head);
    delete(head, se);
    printf("Deleted :\n");
}
