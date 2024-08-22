#include <stdio.h>

struct maths {
    char operator;
    double num1, num2, result;
    char choice;
};

int main(void) {
    struct maths m1;
    int continueProgram = 0;

    do {
        if (continueProgram) {
            m1.num1 = m1.result;
            printf("Continuing with the existing number %lf\n", m1.num1);
        } else {
            printf("Welcome! This is a basic calculator made in C language.\n");
            printf("Please enter the first number: ");
            scanf("%lf", &m1.num1);
        }

        printf("Choose your operator (+, -, *, /) : ");
        scanf(" %c", &m1.operator);

        printf("Please enter your second number :");
        scanf("%lf", &m1.num2);

        switch (m1.operator) {
            case '+': 
           m1.result = m1.num1 + m1.num2;
      printf(" %.2lf + %.2lf = %.2lf \n", m1.num1, m1.num2, m1.result);
      break;
            case '-': 
           m1.result = m1.num1 - m1.num2;
      printf(" %.2lf - %.2lf = %.2lf \n", m1.num1, m1.num2, m1.result);
      break;
            case '*': 
           m1.result = m1.num1 * m1.num2;
      printf(" %.2lf * %.2lf = %.2lf \n", m1.num1, m1.num2, m1.result);
      break;
            case '/': 
                if (m1.num2 == 0) {
                    printf("Error: Division by Zero is not allowed. \n");
                } else {
           m1.result = m1.num1 / m1.num2;
      printf(" %.2lf / %.2lf = %.2lf \n", m1.num1, m1.num2, m1.result);
                }
      break;
            default: 
            printf("Invalid operator!, please try again. \n");
            continue;
        }
        printf("Do you want to continue with the result (%.2lf) or start a new calculation? (c for continue, n for new): ", m1.result);
        scanf(" %c", &m1.choice);

        if (m1.choice == 'c' || m1.choice == 'C') {
            continueProgram = 1;
        } else {
            continueProgram = 0;
        }
    } while (m1.choice == 'c' || m1.choice == 'C' || m1.choice == 'n' || m1.choice == 'N');
    printf("Thank you for using our calculator!\n");
    return 0;
}
