#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s1[100], s2[100], temp[200];
    int l1 = 0, l2 = 0;
    int i = 0, j, k;
    int is_rot = 0;

    printf("Enter the first string: ");
    scanf(" %[^\n]", s1); 

    printf("Enter the second string: ");
    scanf(" %[^\n]", s2); 

    while (s1[l1] != '\0') {
        l1++;
    }
    while (s2[l2] != '\0') {
        l2++;
    }

    if (l1 != l2 || l1 == 0) {
        printf("Not rotation\n");
        return 0;
    }

    for (i = 0; i < l1; i++) {
        temp[i] = s1[i];
    }
    for (i = 0; i < l1; i++) {
        temp[l1 + i] = s1[i];
    }
    temp[2 * l1] = '\0';

    l1 = 2 * l1;

    for (i = 0; i <= l1 - l2; i++) {
        for (j = 0; j < l2; j++) {
            if (temp[i + j] != s2[j]) {
                break;
            }
        }
        if (j == l2) {
            is_rot = 1;
            break;
        }
    }

    if (is_rot) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
