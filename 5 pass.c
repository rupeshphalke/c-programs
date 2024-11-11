#include<stdio.h>
int main( )
{
    int s1 , s2 , s3 , s4 , s5;
    int pass_count;
    printf( "enter five subject marks=\n" );
    scanf( "%d%d%d%d%d" , &s1 , &s2 , &s3 , &s4 , &s5 );
    if ( s1 > 40 )
    {
        pass_count++;

    }
    if ( s2 >= 40 )
    {
        pass_count++;

    }
    if ( s3 >= 40 )
    {
        pass_count++;
    }
    if ( s4 >= 40 )
    {
        pass_count++;
    }
    if ( s5 >= 40 )
    {
        pass_count++;
    }
    if ( pass_count == 5 )
    {
        printf( "All clear\n" );
    }
    if ( pass_count == 3 || pass_count == 4 )
    {
        printf( "A.T.K.T" );
    }
    if ( pass_count >= 0 && pass_count <= 2 )
    {
        printf( "fail" );
    }
    return 0;

}