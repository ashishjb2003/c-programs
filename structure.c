#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[50];
	int age;
	float gpa;

};

int main() 
{
	struct student *ptr;
	ptr = (struct student *)malloc(sizeof(struct student));
	if (ptr==NULL)
	{
		printf("Memory Allocation Failed\n");
		return 1;
	}
	printf("enter the students name:");
	scanf("%49s",&ptr->name);
	printf("enter students age:");
	scanf("%d",&ptr->age);
	printf("enter students GPA:");
	scanf("%f",&ptr->gpa);
	printf("sizeof(struct student)");
	scanf("%d");
	free(ptr);
	return 0;
}

