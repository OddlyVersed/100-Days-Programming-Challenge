#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter the character you want to check:");
    scanf("%c",&ch);
    ch = tolower(ch);
    if ( ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' )
    {
        printf("The character '%c' is a vowel",ch);
    }
    else 
    {
        printf("The character '%c' is a consonent",ch);
    }
    return 0;
}
