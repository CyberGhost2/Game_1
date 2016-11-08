/* Program for adding, subtracting, multiplying and dividing two numbers
 *Author: Semin Skodric Novalic
*/

#include <stdio.h>

int add(int a, int b)
{
    int c;
    c = a+b;
    printf("\nAddition: %d+%d=%d\n", a, b, c);
}
int sub(int a, int b)
{
    int c;
    c = a-b;
    printf("Subtraction: %d-%d=%d\n", a, b, c);
}
int mult(int a, int b)
{
    int c;
    c = a*b;
    printf("Multiplication: %d*%d=%d\n", a, b, c);
}
int div(float a, float b)
{
    float c;
    c = a/b;
    printf("Division: %d/%d=%f\n", (int)a, (int)b, c);
}

int main ()
{
    int num_1, num_2;

    fputs("Enter the first integer: ", stdout);
    scanf("%d", &num_1);
    fputs("Enter the second integer: ", stdout);
    scanf("%d", &num_2);

    add(num_1, num_2);
    sub(num_1, num_2);
    mult(num_1, num_2);
    div(num_1, num_2);

    return 0;
}
