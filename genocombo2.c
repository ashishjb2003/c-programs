#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int weight;
    int amount_in_hand;
} Student;

Student* selected_students(int num, Student* arr, int arr_size) {
    Student* selected_students = (Student*)malloc(10 * sizeof(Student));
    if (selected_students == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < 10; i++) {
        selected_students[i].weight = 0;
        selected_students[i].name = NULL;
    }

    int j = 0;
    int numBits = sizeof(int) * 8;
    for (int i = numBits - 1; i >= 0 && j < 10; i--) {
        int bit = (num >> i) & 1;
        if (bit == 1 && i < arr_size) {
            selected_students[j] = arr[i];
            j++;
        }
    }

    return selected_students;
}

int main() {
    Student students[3];

    students[0].name = (char*)malloc(10);
    strcpy(students[0].name, "Shinu");
    students[0].weight = 10;
    students[0].amount_in_hand = 300;

    students[1].name = (char*)malloc(10);
    strcpy(students[1].name, "Mahesh");
    students[1].weight = 50;
    students[1].amount_in_hand = 200;

    students[2].name = (char*)malloc(10);
    strcpy(students[2].name, "sfesh");
    students[2].weight = 90;
    students[2].amount_in_hand = 20;

    Student* selected = NULL;

    for (int i = 0; i < 8; i++) {
        selected = selected_students(i, students, 3);
        printf("Selected students for pattern %d:\n", i);
        for (int j = 0; j < 10; j++) {
            if (selected[j].name != NULL) {
                printf("Name: %s, Amount in Hand: %d, Weight: %d\n", selected[j].name, students[j].amount_in_hand, selected[j].weight);
            }
        }
        free(selected); 
    }

    for (int i = 0; i < 3; i++) {
        free(students[i].name);
    }

    return 0;
}
