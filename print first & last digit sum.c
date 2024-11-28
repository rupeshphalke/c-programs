
/*accept 4 digit number from the user and print that number last and first digit sum*/
#include<stdio.h>
int main( ) {
    long num;
    printf( "Enter any number=\n" );
    scanf( "%ld" , &num );
    //last digit
    int a = num % 10;
    num = num / 1000;
    int sum = a + num;
    printf( "total sum of last and first digit=%d" , sum );
    return 0;
}