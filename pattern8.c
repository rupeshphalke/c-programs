#include<stdio.h>
int main( ) {
    int i , j , k , l , m , n;
    for ( i = 1; i <= 5; i++ )
    {
        for ( j = 5; j >= i; j-- )
        {
            printf( " . " );
        }
        for ( k = 1; k < i; k++ )
        {
            printf( " * " );
        }
        for ( l = i; l >= 1; l-- )
        {
            printf( " * " );
        }
        for ( m = 1; m <= i; m++ )
        {
            printf( " . " );
        }


        printf( "\n" );
    }

    return 0;
}