/*Program for adding two numbers
Author: Semin Skodric Novalic
*/
#include <stdio.h>

int main()

{

    int a, b, c;

    fputs("Enter the first number: ", stdout);
    scanf("%d", &a);
    fputs("Enter the second number: ", stdout);
    scanf("%d", &b);

    c = a + b;

    printf("Result of %d + %d is: %d", a, b, c);

    return 0;

}
