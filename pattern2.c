
#include<stdio.h>
int main()
{
    int i,j;
    printf("pattern number:2\n");
    for ( i = 5; i >=1; i--)
    {
        for ( j = i; j >=1 ; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
