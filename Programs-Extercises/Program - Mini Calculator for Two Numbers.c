/* Program for doing multiple calculations fot two numbers
 *Author: Semin Skodric Novalic
*/

#include <stdio.h>
#include <stdlib.h>

int option();
int add();
int sub();
int mult();
float divi();

int option()
{
    int option;
    system("cls");
    puts("Enter a number next to the operation you want: ");
    puts("[1] Addition");
    puts("[2] Subtraction");
    puts("[3] Multiplication");
    puts("[4] Division");
    printf("[5] Exit\n\n");
    fputs("My choice: ", stdout);

    scanf("%d", &option);

    if (option == 1)
        add();

    else if (option == 2)
        sub();

    else if (option == 3)
        mult();

    else if (option == 4)
        divi();

    else if (option == 5)
        exit(0);
}

int add()
{
    int a1, a2, b;
    system("cls");
    fputs("Enter the first number you want to add: ", stdout);
    scanf("%d", &a1);
    fputs("Enter the second number you want to add: ", stdout);
    scanf("%d", &a2);

    b = a1+a2;

    printf("\nResult: %d\n", b);
    printf("\n\n(press enter to return to menu)");

    fflush(stdin);
    getchar();
    option();

}
int sub()
{
    int a1, a2, b;
    system("cls");
    fputs("Enter the first number you want to subtract: ", stdout);
    scanf("%d", &a1);
    fputs("Enter the second number you want to subtract: ", stdout);
    scanf("%d", &a2);

    b = a1-a2;

    printf("\nResult: %d\n", b);
    printf("\n\n(press enter to return to menu)");

    fflush(stdin);
    getchar();
    option();
}
int mult()
{
    int a1, a2, b;
    system("cls");
    fputs("Enter the first number you want to multiply: ", stdout);
    scanf("%d", &a1);
    fputs("Enter the second number you want to multiply: ", stdout);
    scanf("%d", &a2);

    b = a1*a2;

    printf("\nResult: %d\n", b);
    printf("\n\n(press enter to return to menu)");

    fflush(stdin);
    getchar();
    option();
}
float divi()
{
    float a1, a2, b;
    system("cls");
    fputs("Enter the first number you want to divide: ", stdout);
    scanf("%f", &a1);
    fputs("Enter the second number you want to divide: ", stdout);
    scanf("%f", &a2);

    b = a1/a2;

    printf("\nResult (four decimal places): %.4f\n", b);
    printf("\n\n(press enter to return to menu)");

    fflush(stdin);
    getchar();
    option();
}

int main ()
{
    option();
}
