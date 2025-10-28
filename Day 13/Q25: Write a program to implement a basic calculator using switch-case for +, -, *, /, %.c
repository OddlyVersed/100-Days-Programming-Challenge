#include <stdio.h>

int main() {
    char op;
    double n1, n2, res;

    printf("Enter calculation (e.g., 4 2 +): ");
    
    if (scanf("%lf %lf %c", &n1, &n2, &op) != 3) {
        printf("Error: Invalid input format. Use: number1 number2 operator (e.g., 10 5 /)\n");
        return 1;
    }

    if (op == '%') {
        if ((long long)n1 != n1 || (long long)n2 != n2) {
            printf("Error: Modulus operator (%%) requires integer operands.\n");
            return 1;
        }
    }

    switch (op) {
        case '+':
            res = n1 + n2;
            printf("%.0f\n", res);
            break;

        case '-':
            res = n1 - n2;
            printf("%.0f\n", res);
            break;

        case '*':
            res = n1 * n2;
            printf("%.0f\n", res);
            break;

        case '/':
            if (n2 != 0) {
                res = n1 / n2;
                if (res == (long long)res) {
                    printf("%.0f\n", res);
                } else {
                    printf("%.2f\n", res);
                }
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (n2 != 0) {
                res = (long long)n1 % (long long)n2;
                printf("%.0f\n", res);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator (%c).\n", op);
    }

    return 0;
}
