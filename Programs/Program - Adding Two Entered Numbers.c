/*Program for adding two numbers
Author: Semin Skodric Novalic
*/
#include <stdio.h>

int main()

{

    int a, b, c;

    puts("Enter the two numbers you want to add: ");
    scanf("%d %d", &a, &b);

    c = a + b;

    printf("Result of %d + %d is: %d", a, b, c);

    return 0;

}
