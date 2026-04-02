#include <stdio.h>

int main() {
    int a[3][4], b[4][2], c[3][2];
    int i, j, k;

  
    printf("Enter elements of matrix a (3x4):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   
    printf("Enter elements of matrix b (4x2):\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            c[i][j] = 0;
        }
    }

 
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 4; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result matrix c (3x2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
