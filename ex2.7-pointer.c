#include<stdio.h>
#include<stdlib.h>



int sum_of_numbers(int *numbers, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }
    return sum;
}

int main() {
    int n;
    int *array;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //array = (int*)malloc(n*sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }
    
    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    int sum = sum_of_numbers(array, n);
    printf("Sum of array elements: %d\n", sum);
    
    free(array);
    
    return 0;
}



	
