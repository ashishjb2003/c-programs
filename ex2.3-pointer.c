#include <stdio.h>

void add_value(int *a,int *b,int *s)
{
	*s=*a+*b;
}


int main()

{
	int num1=10;
	int num2=20;
	int result=0;	
	int *ptr_num1=&num1;
	int *ptr_num2=&num2;
	int *ptr_result = &result;
        add_value(ptr_num1,ptr_num2,ptr_result);
	printf("Value after function call %d\n",*ptr_result);
	return (0);
}
