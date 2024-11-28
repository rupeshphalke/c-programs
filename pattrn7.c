#include<stdio.h>
int main( ) {


    int i , j , k , l;
    for ( i = 0; i <= 5; i++ )
    {
        for ( j = 5; j > i; j-- )
        {
            printf( "  " );
        }

        for ( k = 1; k <= i; k++ )
        {
            printf( " %d" , k );
        }

        for ( l = k; l >= 1; l-- )
        {
            printf( " %d" , l );
        }
        printf( "\n" );


    }

    return 0;
}