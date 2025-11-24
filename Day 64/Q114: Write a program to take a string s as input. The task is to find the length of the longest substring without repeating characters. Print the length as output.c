#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int char_index[128];
    int n;
    int i;
    int left = 0;
    int max_length = 0;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (scanf("%s", s) != 1) {
        printf("0\n");
        return 0;
    }
    
    n = strlen(s);

    for (i = 0; i < 128; i++) {
        char_index[i] = -1;
    }
    
    for (i = 0; i < n; i++) {
        if (char_index[s[i]] >= left) {
            left = char_index[s[i]] + 1;
        }
        
        char_index[s[i]] = i;
        
        if (i - left + 1 > max_length) {
            max_length = i - left + 1;
        }
    }

    printf("%d\n", max_length);

    return 0;
}
