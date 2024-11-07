#include <stdio.h>
// #include <stdlib.h>

// int main()
// {

//     int a[5], i, j;
//     int temp;
//     printf("enter  array elements=\n");
//     ;
//     for (i = 0; i <= 4; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i <= 4; i++)
//     {
//         for (j = i + 1; j <= 4; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i <= 4; i++)
//     {
//         printf("%d\t", a[i]);
//     }
//     return 0;
// }
/* sort a array using insertion sort algorithm in decending order*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[5], i, j;
    int temp;
    printf("enter  array elements=\n");
    ;
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}