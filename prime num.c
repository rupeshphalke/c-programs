/*check number is prime or not*/
#include <stdio.h>
int main()
{
    int num;
    int flag = 0;
    printf("enter any number=\n");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not  prime number", num);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is  prime number", num);
    }

    return 0;
}