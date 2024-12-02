// c program to check whether a year is a leap or not. 

#include <stdio.h>

void main ()
{

    int year ;

    printf(" The year : ");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf(" The year is leap ");
    }
    else 
    {
       printf(" The year is not leap ");
    }
    
}