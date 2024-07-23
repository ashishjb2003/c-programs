#include<stdio.h>
int main()
{
	FILE *fp;
	char data[100];
	fp=fopen("example.txt","w");
	if(fp==NULL)
	{
		printf("error opening file!\n");
		return 1;
	}
	fprintf(fp,"hello,file handling in c!\n");
	fprintf(fp,"this is a simple example.\n");
	
	fclose(fp);
}
