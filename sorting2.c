#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *array;
    int n,i,j,minIndex,temp=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    
    array=(int *)malloc(n*sizeof(int));
    if(array==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[minIndex])
            {
                minIndex=j;
            }
        } 
    
    temp=array[i];
    array[i]=array[minIndex];
    array[minIndex]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("\t%d",array[i]);

    }
}

