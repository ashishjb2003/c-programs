#include<stdio.h>
#include<math.h>
int main()
{
    int N=10,K=5,M;
    scanf("%d",&M);
    K=N-M;
    if(M<N && K>=5)
    {
        printf("NUMBER OF CANDIES SOLD : %d \n",M);
        printf("NUMBER OF CANDIES AVAILABLE : %d \n",K);
    }
    else
    {
        printf("INVALID INPUT");
    }
}
