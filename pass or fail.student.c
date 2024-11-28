#include<stdio.h>
int main( )
{
    int s1 , s2 , s3 , s4 , s5;
    printf( "enter five subject marks=\n" );
    scanf( "%d%d%d%d%d" , &s1 , &s2 , &s3 , &s4 , &s5 );
    int sum = s1 + s2 + s3 + s4 + s5;
    float p = sum / 5.0;
    if ( p > 40.00 )w
    {
        printf( "student is pass\n" );
    }
    else
    {

        printf( "student is fail\n" );

    }
    return 0;
}