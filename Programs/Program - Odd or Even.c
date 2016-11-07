/*Program for checking if the entered number is even or odd
Author: Semin Skodric Novalic
*/
#include <stdio.h>

int main()

{
    int n;

    fputs("Enter a number: ", stdout);
    scanf("%d", &n);

    if (n%2 == 0)
        puts("Number is even.");

    else
        puts("Number is odd");

    return 0;
}
