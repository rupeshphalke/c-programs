// // 2023 year calculate total day and print which week day of thise purticuler date
// #include<stdio.h>
// int main( )
// {

//     int m , d;
//     printf( "enter date=\n" );
//     scanf( "%d" , &d );
//     printf( "enter mounth=\n" );
//     scanf( "%d" , &m );
//     int  total_day = 0 , mounth_day;
//     if ( m == 1 )
//     {
//         mounth_day = 0;
//     }
//     if ( m == 2 )
//     {
//         mounth_day = 31;
//     }
//     if ( m == 3 )
//     {
//         mounth_day = 31 + 28;
//     }
//     if ( m == 4 )
//     {
//         mounth_day = 31 + 28 + 31;
//     }
//     if ( m == 5 )
//     {
//         mounth_day = 31 + 28 + 31 + 30;
//     }
//     if ( m == 6 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31;
//     }
//     if ( m == 7 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31 + 30;
//     }
//     if ( m == 8 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31 + 30 + 31;
//     }
//     if ( m == 9 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//     }
//     if ( m == 10 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//     }
//     if ( m == 11 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//     }
//     if ( m == 12 )
//     {
//         mounth_day = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//     }
//     total_day = mounth_day + d;
//     printf( "total days %d" , total_day );
//     if ( total_day % 7 == 1 )
//     {
//         printf( "sunday" );
//     }
//     if ( total_day % 7 == 2 )
//     {
//         printf( "monday" );
//     }
//     if ( total_day % 7 == 3 )
//     {
//         printf( "tusday" );
//     }
//     if ( total_day % 7 == 4 )
//     {
//         printf( "wensday" );
//     }
//     if ( total_day % 7 == 5 )
//     {
//         printf( "tuestday" );
//     }
//     if ( total_day % 7 == 6 )
//     {
//         printf( "fryday" );
//     }


//     if ( total_day % 7 == 7 )
//     {
//         printf( "saturday" );
//     }
//     return 0;
// }


#include<stdio.h>
int main( )
{
//step 1: get input
    int d , m , y;
    printf( "enter date =\n" );
    scanf( "%d" , &d );
    printf( "enter mounth =\n" );
    scanf( "%d" , &m );
    printf( "enter year =\n" );
    scanf( "%d" , &y );
    if ( d % 7 == 1 )
    {
        printf( "monday" );
    }
    if ( d % 7 == 2 )
    {
        printf( "tuesday" );
    }
    if ( d % 7 == 3 )
    {
        printf( "wednesday" );
    }
    if ( d % 7 == 4 )
    {
        printf( "tursday" );
    }
    if ( d % 7 == 5 )
    {
        printf( "fryday" );
    }
    if ( d % 7 == 6 )
    {
        printf( "asturday" );
    }
    if ( d % 7 == 7 )
    {
        printf( "sunday" );
    }
    return 0;

}