#include <stdio.h>
/* Program that asks the user for a integer, then prints that integer to the screen.
 * Author: Semin Skodric Novalic
 */

int main ()
{
    int num;

    fputs("Enter a integer: ", stdout);
    scanf("%d", &num);

    printf("You entered the number: %d", num);

    return 0;
}
