#include<stdio.h>
#include<stdlib.h>

typedef struct Node

{
	int data;
	struct Node*next;
}Node;

typedef struct
{
	Node*head;
}LinkedList;

Node* createNode(int data)
{
	Node*newNode=(Node*)malloc(sizeof(Node));
	if(newNode == NULL)
	{
		perror("Memory allocation failed");
		exit(1);
	}
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}


void insertAtBeginning(LinkedList*list,int data)
{
	Node*newNode=createNode(data);
	newNode->next = list->head;
	list->head=newNode;
	printf("%d inserted at the beginning\n",data);
}

int deleteFromBeginning(LinkedList*list)
{
	if(list->head == NULL)
	{
		printf("List is empty\n");
		return-1;
	}
	
	Node* temp=list->head;
	int data = temp->data;
	list->head=temp->next;
	free(temp);
	return data;
}

void printlist(LinkedList* list)
{
    while(current!=NULL)
    {
        printf("%d->",current->data);
        current=current->next;

    }
    printf("NULL\n");
}
int main()
{
    LinkedList list;
    list.head=NULL;
    insertAtBegining(&list,10);
    insertAtBegining(&list,20);
    insertAtBegining(&list,30);

    printlist(&list)
    int deleted=deletedFromBegining(&list);
    printList(&list);
    return 0;
    

}

