#include <stdio.h>

int main() {
    int R, C;
    
    printf("Enter the number of rows: ");
    scanf("%d", &R);
    printf("Enter the number of columns: ");
    scanf("%d", &C);

    int parkingLot[R][C];
    
    printf("Enter the status of parking spaces (0 for empty, 1 for full):\n");
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &parkingLot[i][j]);
        }
    }
    
    int maxFullSpaces = -1;
    int rowIndexWithMaxFullSpaces = -1;
    
    for (int i = 0; i < R; i++) {
        int fullSpacesCount = 0;
        for (int j = 0; j < C; j++) {
            if (parkingLot[i][j] == 1) {
                fullSpacesCount++;
            }
        }
        if (fullSpacesCount > maxFullSpaces) {
            maxFullSpaces = fullSpacesCount;
            rowIndexWithMaxFullSpaces = i;
        }
    }

    printf("Row with the most full parking spaces: %d\n", rowIndexWithMaxFullSpaces);

    return 0;
}


