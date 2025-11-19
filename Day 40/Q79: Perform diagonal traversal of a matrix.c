#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    int r, c;
    int i, j;
    
    printf("Enter the number of rows and columns (r c): ");
    scanf("%d %d", &r, &c);

    if (r != c || r <= 0) {
        printf("Error: Matrix must be a square matrix (e.g., 3 3) with size > 0.\n");
        return 1;
    }

    int arr[r][c];

    printf("Enter %d elements (%d rows and %d columns):\n", r * c, r, c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int row = 0;
    int col = 0;
    int dir = 1; 
    
    for (i = 0; i < r * c; i++) {
        printf("%d ", arr[row][col]);

        if (dir == 1) { 
            row--; 
            col++; 
        } else { 
            row++; 
            col--; 
        }

        if (row >= r || col >= c || row < 0 || col < 0) {
            
            dir = 1 - dir;

            if (dir == 0) { 
                if (col >= c) { 
                    row += 2; 
                    col = c - 1; 
                } else if (row < 0) {
                    row = 0; 
                }
            } else { 
                if (row >= r) { 
                    col += 2; 
                    row = r - 1; 
                } else if (col < 0) {
                    col = 0; 
                }
            }
        }
    }
    printf("\n");

    return 0;
}
