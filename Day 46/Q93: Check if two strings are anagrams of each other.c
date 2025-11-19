#include <stdio.h>

int main() {
    printf("Name - Dibyendu Bhattacharjee \nSap Id - 590025721\nCourse - Bsc Computer Science\nBatch - B1");
    printf("\n--------------------------------\n");
    char s1[100], s2[100];
    int freq[26] = {0};
    int i = 0;
    int is_anagram = 1;

    printf("Enter the first string: ");
    scanf(" %[^\n]", s1); 

    printf("Enter the second string: ");
    scanf(" %[^\n]", s2); 

    while (s1[i] != '\0') {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            freq[s1[i] - 'a']++;
        }
        i++;
    }

    i = 0;
    while (s2[i] != '\0') {
        if (s2[i] >= 'a' && s2[i] <= 'z') {
            freq[s2[i] - 'a']--;
        }
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
