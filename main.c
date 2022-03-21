#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "complexmath.h"

void read_operand(double *input_real, double *input_imaginary)
{
    printf("Inset real part: ");
    scanf("%lf", input_real);

    printf("Inset imaginary part: ");
    scanf("%lf", input_imaginary);

    printf("\n");
}

void read_operation(char *operation)
{
    printf("Insert opeartor: ");
    scanf(" %c", operation);
    printf("\n");
}

void solve(double *a_real, double *a_imaginary, double *b_real, double *b_imaginary, double *result_real, double *result_imaginary, char *operation)
{
    bool invalid_operation;

    do
    {
        invalid_operation = false;

        switch(*operation)
        {
            case '+':
                add(*a_real, *a_imaginary, *b_real, *b_imaginary, result_real, result_imaginary);
                break;
            case '-':
                substract(*a_real, *a_imaginary, *b_real, *b_imaginary, result_real, result_imaginary);
                break;
            case '*':
                multiply(*a_real, *a_imaginary, *b_real, *b_imaginary, result_real, result_imaginary);
                break;
            case '/':
                divide(*a_real, *a_imaginary, *b_real, *b_imaginary, result_real, result_imaginary);
                break;
            default:
                printf("Invalid operation\n");
                read_operation(operation);
                invalid_operation = true;
                break;
        }
    }
    while(invalid_operation);
}

int main()
{
    double a_real, a_imaginary;             // Komplexni cislo A
    double b_real, b_imaginary;             // Komplexni cislo B
    double result_real, result_imaginary;   // Komplexni vysledek operace
    char operation;                         // Znak operace
    char c;                                 // Znak pro rizeni cyklu

    do
    {
        printf("1st operand\n");
        read_operand(&a_real, &a_imaginary);

        printf("2st operand\n");
        read_operand(&b_real, &b_imaginary);

        read_operation(&operation);

        solve(&a_real, &a_imaginary, &b_real, &b_imaginary, &result_real, &result_imaginary, &operation);

        printf("(%f %c j%f) %c (%f %c j%f) = (%f %c j%f)\n\n",
               a_real, a_imaginary < 0 ? '-' : '+', fabs(a_imaginary), operation,
               b_real, b_imaginary < 0 ? '-' : '+', fabs(b_imaginary),
               result_real, result_imaginary < 0 ? '-' : '+', fabs(result_imaginary));

        printf("If you want to close program, insert y, if no, insert other character: ");
        scanf(" %c", &c);
        printf("\n");
    }
    while(c != 'y');

    return 0;
}
