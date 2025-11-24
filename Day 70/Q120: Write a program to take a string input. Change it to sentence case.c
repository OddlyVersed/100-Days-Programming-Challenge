#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
    int is_new_word = 1;

    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    
    str[strcspn(str, "\n")] = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            is_new_word = 1;
        } else if (is_new_word) {
            str[i] = toupper(str[i]);
            is_new_word = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s\n", str);

    return 0;
}
