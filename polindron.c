// #include<stdio.h>
// int main( )
// {
//     int n;
//     printf( "enter any four digit number=\n" );
//     scanf( "%4d" , &n );
//     int a = n % 10;
//     n = n / 10;
//     int b = n % 10;
//     n = n / 10;
//     int  c = n % 10;
//     n = n % 10;
//     int  sum = c * 1000 + b * 100 + a * 10 + n;
//     printf( "%d" , sum );




// }
#include<stdio.h>
int main( )
{
    int m , temp;
    printf( "enter number=\n" );
    scanf( "%4d" , &m );
    temp = m;
    int a = m % 10;
    m = m / 10;
    int b = m % 10;
    m = m / 10;
    int c = m % 10;
    m = m / 10;

    if ( ( a * 1000 ) + ( b * 100 ) + ( c * 10 ) + m == temp )
    {
        printf( "number is polindrom" );

    }
    else {
        printf( "number is not a polindrom" );
    }
    return 0;
}