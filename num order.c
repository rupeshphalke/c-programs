#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number=\n");
    scanf("%d", &a);
    printf("enter second number-=\n");
    scanf("%d", &b);
    printf("enter thard number=\n");
    scanf("%d", &c);
    if (a < b < c)
    {
        printf("%d%d%d", a, b, c);
    }
    else if (b < a < c)
    {
        printf("%d%d%d", b, a, c);
    }
    else if (c < a < b)
    {
        printf("%d%d%d", c, a, b);
    }
    else if (c < b < a)
    {
        printf("%d%d%d", c, b, a);
    }
    else if (a < c < b)
    {
        printf("%d%d%d", a, c, b);
    }
    else if (b < c < a)
    {
        printf("%d%d%d", b, c, a);
    }
}