#include<stdio.h>
#include<stdlib.h>

void bit(int a)
	{
		for(int i=31;i>0;i--)
		{
			int right_shift_result=a>>i;
			int and_result=right_shift_result&1;
			printf("%d",and_result);
			
		
		}
	}


int main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	int and_result = a & b;
	printf("AND: %d\n",and_result);

	int or_result = a|b;
	printf("OR: %d\n",or_result);

	int xor_result = a^b;
	printf("XOR: %d\n",xor_result);

	int not_result = ~a;
	printf("NOT: %d\n",not_result);

	int left_shift_result = a<<1;
	printf("Left Shift: %d\n",left_shift_result);

	int right_shift_result = a>>1;
	printf("Right Shift: %d\n",right_shift_result);

	printf("binary value");
	bit(a);
}

	

	



	
	


	
