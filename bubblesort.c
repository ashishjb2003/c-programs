#include<stdio.h>
#include<stdlib.h>

int sorting(int *A,int n)
{
	int i,j,temp;
	for (int i = 0; i < n - 1; i++) 
	{
        	for (int j = i+1; j < n ; j++) 
		{
                	if (*(A + i) > *(A + j )) 
			{
                	        temp = *(A + i);
                		*(A+ i) = *(A + j );
               			*(A + j ) = temp;
                        }
                }
        }

}

int main()
{
	int A[]={3,6,7,2,9,10,12,45,1,12,11};
	int n = sizeof(A) / sizeof(A[0]);
      

	sorting(A,n);
	int i;
	for(i=0;i<n;i++)
        {
	printf("sorted array:%d\n",*(A+i));
	}
        return 0;
}
