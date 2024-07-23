#include <stdio.h>

int add_value(int *a,int *b)
{
	return *a+*b;
}


int main()

{
	int num1=10;
	int num2=20;
	int result=0;	
	int *ptr_num1=&num1;
	int *ptr_num2=&num2;
	int *ptr_result = &result;
        result=add_value(ptr_num1,ptr_num2);
	printf("Value after function call %d\n",result);
	return (0);
}
