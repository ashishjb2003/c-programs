#include<stdio.h>
#include<stdlib.h>
struct Student {
    char name[50];
    int age;
};
int main()
{
    struct Student *ptr;
    ptr=(struct Student *)malloc(sizeof(struct Student));
    if (ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        printf("Details of students:",n+1);
        printf("Enter students's name:");
        scanf("%49s",(ptr+i)->name);
        printf("Enter student's age:");
        scanf("%d",&(ptr+i)->age);
    }
   for(i=0;i<n;i++){
    printf("")
   }
    
    free(ptr);
    return 0;
}

