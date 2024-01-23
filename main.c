#include <stdio.h>
#include <math.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double x);
double factorial(int n);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double logarithm(double x);
double naturalLogarithm(double x);

int main() {
    int choice;
    double a, b, result;
    int n;

    do {
        // Display menu
        printf("\nScientific Calculator \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Factorial\n");
        printf("8. Sine\n");
        printf("9. Cosine\n");
        printf("10. Tangent\n");
        printf("11. Logarithm (base 10)\n");
        printf("12. Natural Logarithm (base e)\n");
        printf("0. Exit\n");

        // User input
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = add(a, b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = subtract(a, b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = multiply(a, b);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                result = divide(a, b);
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = power(a, b);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                result = squareRoot(a);
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%d", &n);
                result = factorial(n);
                break;
            case 8:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &a);
                result = sine(a);
                break;
            case 9:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &a);
                result = cosine(a);
                break;
            case 10:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &a);
                result = tangent(a);
                break;
            case 11:
                printf("Enter a number: ");
                scanf("%lf", &a);
                result = logarithm(a);
                break;
            case 12:
                printf("Enter a number: ");
                scanf("%lf", &a);
                result = naturalLogarithm(a);
                break;
            case 0:
                printf("Exiting calculator.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                continue;
        }

        // Display result
        printf("Result: %lf\n", result);


    } while (1);

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double x) {
    if (x >= 0) {
        return sqrt(x);
    } else {
        printf("Error: Cannot calculate square root of a negative number.\n");
        return 0;
    }
}

double factorial(int n) {
    if (n < 0) {
        printf("Error: Cannot calculate factorial of a negative number.\n");
        return 0;
    } else if (n == 0) {
        return 1;
    } else {
        double result = 1.0;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

double sine(double angle) {
    return sin(angle * M_PI / 180.0);
}

double cosine(double angle) {
    return cos(angle * M_PI / 180.0);
}

double tangent(double angle) {
    return tan(angle * M_PI / 180.0);
}

double logarithm(double x) {
    if (x > 0) {
        return log10(x);
    } else {
        printf("Error: Cannot calculate logarithm of a non-positive number.\n");
        return 0;
    }
}

double naturalLogarithm(double x) {
    if (x > 0) {
        return log(x);
    } else {
        printf("Error: Cannot calculate natural logarithm of a non-positive number.\n");
        return 0;
    }
}
