#include <stdio.h>

int * add_value(int *a,int *b)
{
	int *r_ptr;
	*r_ptr=*a+*b;
	return r_ptr;
}


int main()

{
	int num1=10;
	int num2=12;
	int result=0;	
	int *ptr_num1=&num1;
	int *ptr_num2=&num2;
	int *ptr_result = &result;
        ptr_result = add_value(ptr_num1,ptr_num2);
	printf("Value after function call %d\n",*ptr_result);
	return (0);
}
