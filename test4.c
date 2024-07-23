#include <stdio.h>
int main(){
    int arr[50];
    int a_1=0, a_2=0, a_3=0;
    for (int i=0; i<9; i++){
        scanf("%d", &arr[i]);
        if (arr[i]<1|arr[i]>100){
            printf("INVALID INPUT");
        }
        if (i%3==0){
            a_1+=arr[i];
        }
        else if (i%3==1){
            a_2+=arr[i];
        }
        else{
            a_3+=arr[i];
        }
    }
    a_1/=3;
    a_2/=3;
    a_3/=3;
    int av[]={a_1, a_2, a_3};
    if (a_1<70|a_2<70|a_3<70){
        printf("All Trainees are unfit");
        return 1;
    }
    int l=av[0];
    for (int i=1;i<3; i++){
        if (l<av[i]){
            l=av[i];
        }
    }
    for (int i=0;i<3; i++){
        if (l==av[i]){
            printf("\nTrainee No: %d", i+1);
        }
    }


}
