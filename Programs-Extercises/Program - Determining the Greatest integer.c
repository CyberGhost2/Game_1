#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three integers: ")
    scanf("%d,%d,%d",&a,&b,&c);

    if (a>b && a>c)

    {
        printf("The greatest integer is a: %d", a);
    }

    else if (b>a && b>c)
    {
        printf("The greatest integer is b: %d", b);
    }

    else if (c>a && c>b)

    {
        printf("The greatest integer is c: %d", c);
    }

    return 0;
}
