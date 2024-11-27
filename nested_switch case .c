
#include<stdio.h>
#include<conio.h>
int main( ) {
    int choice1 , a , b , c;
    char choice2 , choice3 , again;
    do
    {
        printf( "enter any two value=" );
        scanf( "%d%d" , &a , &b );
        printf( "1-arithmatic opration\n" );
        printf( "2-relational opration\n" );
        printf( "enter right opration=" );
        scanf( "%d" , &choice1 );
        switch ( choice1 )
        {
        case 1://arithmatic opration

            printf( "a,A,+=addition\n" );
            printf( "s,-,S=subtracation\n" );
            printf( "m,M,*=multiplication\n" );
            printf( "d,D,/=division\n" );
            printf( "%=modulas(%)\n" );
            printf( "enter right arithmatic opration=" );
            fflush( stdin );
            scanf( "%c" , &choice2 );
            switch ( choice2 )
            {
            case '+':
            case 'a':
            case 'A':
                c = a + b;
                printf( "total addition=%d" , c );
                break;
            case '-':
            case 's':
            case 'S':
                c = a - b;
                printf( "total subtraction=%d" , c );
                break;
            case '*':
            case 'm':
            case 'M':
                c = a * b;
                printf( "total multiplication=%d" , c );
                break;
            case '/':
            case 'd':
            case 'D':
                c = a / b;
                printf( "total division=%d" , c );
                break;
            case '%':

                c = a % b;
                printf( "total remainder=%d" , c );
                break;

            default:printf( "your entered wrong arithmatic opration\n" );
                break;
            }// end of arithmatic oprator switch

            break;
        case 2:
            printf( "l,L= find largest number\n" );
            printf( "s,S=find smallest number\n" );
            printf( "enter your choice opration=" );
            fflush( stdin );
            scanf( "%c" , &choice3 );
            switch ( choice3 )
            {
            case 'l':
            case 'L':
                if ( a > b )
                {
                    printf( "%d is largest number" , a );
                }
                else
                {
                    printf( "%d is largest number" , b );
                }


                break;
            case 's':
            case'S':
                if ( a < b )
                {
                    printf( "%d is smalleast number" , a );
                }
                else
                {
                    printf( "%d is smallest number" , b );
                }
                break;



            default:
                printf( "your enter wrong opration\n" );
                break;
            }

        default:printf( "wrong opration" );
            break;
        }
        fflush( stdin );
        printf( "\n\ndo you weant again opration(yes y/Y)=" );
        scanf( "%c" , &again );


    }
    while ( again == 'y' || again == 'Y' );


    return 0;
}
