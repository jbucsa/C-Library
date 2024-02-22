#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num,temp,a,i ;

    clrscr() ;
    printf ( " \n Enter the Number " ) ;
    scanf ( "%u", &num ) ;
        temp = num ;

    while( temp <= 0 || temp >= 5000)
    {
        printf ( "\n The Romans don't believe is a zero number." ) ;
        getch() ;
        exit(0) ;
    }
    
    while( temp >= 5000)
    {
        printf ( "\n The number is to large for the Romans." ) ;
        getch() ;
    exit(0) ;
    }
    printf ( "\n The Roman letter Representation is : " ) ;
    
    if ( num >= 1000 )
    {
        a = num / 1000 ;
        for ( i = 0 ; i < a ; i++ )
        printf ( "M" ) ;
        num = num - ( a* 1000 ) ;
    }

    if ( num>=500 )
    {
        if ( num>=900 )
        {
            printf( "CM" ) ;
            num = num -900 ;
        }
        else
        {   
            printf ("D" ) ;
            num = num - 500 ;
        }
    }

    if ( num >= 100 )
    {
        a = num / 100 ;
        for ( i = 0 ; i < a ; i++ )
        printf ( "C" ) ;
        num = num - ( a* 100 ) ;
    }

    if ( num >= 50 )
    {
        if ( num >= 90 )
        {
            printf ( "XC" ) ;
            num = num - 90 ;
        }
        else
        {
            printf ( "L" ) ;
            num = num - 50 ;
        }
    }

    if ( num >= 10 )
    {
        a = num / 10 ;
        for ( i = 0 ; i < a ; i++ )
        printf ( "X" );
        num = num - (a*10) ;
    }

    if ( num >= 5 )
    {
        if ( num >= 9 )
        {
        printf ( "IX" ) ;
        num = num - 9 ;
        }

        else
        {
        printf ( "V" ) ;
        num = num - 5 ;
        }
    }

    if ( num >= 1 )
    {
        a = num / 1 ;
        for ( i = 0 ; i < a ; i++ )
        printf ( "I" );
        num = num - (a*1) ;
    }
    getch() ;
} 
