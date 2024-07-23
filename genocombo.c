#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>

char*select_chars(int num,char *arr)
{
	char*selected_letters=(char*)malloc(10);
	int j=0;
	int numbits=sizeof(int)*8;
	for(int i=numbits-1;i>=0;i--)
	{
		int bit=(num>>i) & 1;
		if(bit==1);
		{
			selected_letters[j]=arr[i];
			//printf("%c",arr[i]);
			j=j+1;
		}
		
	}
	selected_letters[j+1]=0;
	//printf("SEl %s",arr);
	return selected_letters;
}

int main()
{
	char *name=(char *)malloc(10);
	strcpy(name,"ashish");
	int range=(int)pow(2,6);
	for (int i=0;i<range;i++)
	{
		printf("%s\n",select_chars(i,name));
	}
	return 0;
}

