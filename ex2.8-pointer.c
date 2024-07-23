#include<stdio.h>
#include<stdlib.h>


int largest_of_numbers(int *numbers,int n)
{
	int largest=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		if(numbers[i]>largest)
		{
			largest=numbers[i];
		}
	}
	return largest;
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
    
    int largest = largest_of_numbers(array, n);
    printf("largest array element: %d\n", largest);
    
    free(array);
    
    return 0;
}


