#include <stdio.h>

int main() {

    float cp, sp, diff, percentage;

    printf("Enter the Cost Price: ");
    scanf("%f", &cp);

    printf("Enter the Selling Price: ");
    scanf("%f", &sp);

    diff = sp - cp;

    if (diff> 0) {
        percentage = (diff / cp) * 100;
        printf("Profit %.0f%%\n", percentage);
    }

    else if (diff < 0) {
        
        percentage = (-diff / cp) * 100; 
        printf("Loss %.0f%%\n", percentage);
    }

    else { 
        
        printf("No Profit No Loss\n");
    }

    return 0;
}
