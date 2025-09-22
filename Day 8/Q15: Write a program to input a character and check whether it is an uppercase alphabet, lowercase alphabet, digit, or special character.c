#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter the character you want to check: ");
    scanf(" %c", &ch);
    if (isupper(ch)) 
    {
        printf("Uppercase alphabet");
    }
    else if (islower(ch)) 
    {
        printf("Lowercase alphabet");
    }
    else if (isdigit(ch)) 
    {
        printf("Digit");
    }
    else 
    {
        printf("Special character");
    }

return 0;
}
