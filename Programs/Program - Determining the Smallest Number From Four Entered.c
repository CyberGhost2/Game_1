/*Program for determining the smallest number, of the 4 entered numbers
Author: Semin Skodric Novalic
*/
#include <stdio.h>

int main ()
{
    int a, b, c , d;

    fputs("Enter number one: ", stdout);
    scanf("%d", &a);
    fputs("Enter number two: ", stdout);
    scanf("%d", &b);
    fputs("Enter number three: ", stdout);
    scanf("%d", &c);
    fputs("Enter number four: ", stdout);
    scanf("%d", &d);

    if (a<b && a<c && a<d)
        printf("The smallest number is: %d", a);

    else if (b<a && b<c && b<d)
        printf("The smallest number is: %d", b);

    else if (c<a && c<b && c<d)
        printf("The smallest number is: %d", c);

    else if (d<a && d<b && d<c)
        printf("\nThe smallest number is: %d", d);

    return 0;
}
