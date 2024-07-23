#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    struct student *ptr;
    ptr=(struct student*)malloc(sizeof(struct student));
    if(ptr==NULL){
        return 1;
    }
    printf("enter students name:");
    scanf("%49s",&ptr->name);
    printf("enter students age:");
    scanf("%d",&ptr->age);
    printf("enter students gpa:");
    scanf("%f",&ptr->gpa);
    
    free(ptr);
    return 0
