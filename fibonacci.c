#include<stdio.h>

int fibonacci(int n){
    if(n<=1){
        return n;}
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    printf("enter the position of the fibonacci number:");
    scanf("%d",&n);
    printf("%d fibinocci is%d",n,fibonacci(n));
}
