#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,j,count=0,S[20];
    char B[20];
    scanf("%d",&N);
    for (i=0; i<N; i++)
    {
        scanf(" %c",&B[i]);
    }
    for (i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(B[i]==B[j])
            {
                count++;
            }
        }
    S[i]=count;
    count=0;
    }
    for (i=0; i<N; i++)
    {
        if(S[i]%2!=0)
        {
            printf("%c",B[i]);
            break;
        }
    }
}
	
