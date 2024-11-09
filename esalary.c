
#include<stdio.h>
#include<conio.h>
int main( )
{
    int age , ye , flag;
    char gen;
    printf( "enter the age of an employee=\n" );
    scanf( "%d" , &age );
    fflush( stdin );
    printf( "enter gender of an employee=\n" );
    scanf( "%c" , &gen );
    printf( "enter the exeprence of an employee in year\n" );
    scanf( "%d" , &ye );
    if ( ( age >= 21 && age <= 28 ) && ( gen == 'M' || gen == 'm' ) && ( ye >= 0 && ye <= 5 ) )
    {
        printf( "salary is 30000\n" );
        flag == 1;
    }
    if ( ( age >= 21 && age <= 28 ) && ( gen == 'F' || gen == 'f' ) && ( ye >= 0 && ye <= 5 ) )
    {
        printf( "salary is 35000\n" );
        flag == 1;
    }
    if ( ( age >= 29 && age <= 35 ) && ( gen == 'M' || gen == 'm' ) && ( ye >= 6 && ye <= 12 ) )
    {
        printf( "salary is 45000\n" );
        flag == 1;
    }
    if ( ( age >= 29 && age <= 35 ) && ( gen == 'F' || gen == 'f' ) && ( ye >= 6 && ye <= 12 ) )
    {
        printf( "salary is 50000\n" );
        flag == 1;
    }
    if ( ( age >= 36 && age <= 42 ) && ( gen == 'F' || gen == 'f' || gen == 'M' || gen == 'm' ) && ( ye >= 13 && ye <= 18 ) )
    {
        printf( "salary is 70000\n" );
        flag == 1;
    }
    if ( ( age > 42 ) && ( gen == 'F' || gen == 'f' || gen == 'M' || gen == 'm' ) && ( ye > 18 ) )
    {
        printf( "salary is 85000\n" );
        flag == 1;
    }
    if ( flag == 0 )
    {
        printf( "your not capable for below categres\n" );
    }
    return 0;
}
