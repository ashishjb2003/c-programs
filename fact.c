#include<stdio.h>
#include<stdlib.h>

int main()
{
    int factoral(int n);
    int n,result;
    printf("enter the number");
    scanf("%d",&n);
    result=factoral(n);
    printf("fact=%d",result);
    return 0;
}


int factoral(int n)
{
    if(n>1)
    {
        return n*factoral(n-1);
    }
    else
    {
        return 1;

    }
    
}

