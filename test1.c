#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int v,w;
	int tw,fw;
	scanf("%d",&w);
        scanf("%d",&v);
	if(w<2|w%2!=0|v>w)
	{
		printf("INVALID INPUT");
	}
	fw=(w-2*v)/2;
	tw=v-fw;
	printf("%d",tw);
	printf("%d",fw);
}
