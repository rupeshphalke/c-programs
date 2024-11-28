#include<stdio.h>
void main()
{

    int i,j;
    printf("pattern no:4\n");
for ( i = 'A'; i <= 'E'; i++)
{
    for ( j = 'A'; j <=i; j++)
    {
        printf("%c",j);
    }
    printf("\n");
}

}