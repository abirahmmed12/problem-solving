#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char square[3][3];
        int countA = 0, countB = 0, countC = 0;
        char missingChar;

        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf(" %c", &square[i][j]);
                if (square[i][j] == 'A') countA++;
                else if (square[i][j] == 'B') countB++;
                else if (square[i][j] == 'C') countC++;
                else missingChar = square[i][j];
            }
        }

        
        if (countA == 2 && countB == 1) {
            printf("C\n");
        } else if (countA == 2 && countC == 1) {
            printf("B\n");
        } else if (countB == 2 && countA == 1) {
            printf("C\n");
        } else if (countB == 2 && countC == 1) {
            printf("A\n");
        } else if (countC == 2 && countA == 1) {
            printf("B\n");
        } else if (countC == 2 && countB == 1) {
            printf("A\n");
        } else {
            printf("%c\n", missingChar);
        }
    }

    return 0;
}
