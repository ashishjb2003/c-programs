#include<stdio.h>
long fibs[100];

long fibonacci(int n){
    long fib=0;
    if(n<=1){
        return n;}
    else{
        if(fibs[n]!=-1){
            return fibs[n];
        }
        else
        {

        
        return fibonacci(n-1)+fibonacci(n-2);
        fibs[n]=fib;
        return fib;
    }
}
}
int main(){
    int n,i;
    for(i=0;i<100;i++){
        fibs[i]=-1;
    }
    printf("enter the position of the fibonacci number:");
    scanf("%d",&n);
    long result=fibonacci(n);
    printf("%d fibinocci is %ld",n,result);
}
   
