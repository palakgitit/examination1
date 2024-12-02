//  develop c program to convert temperature from degree celsius to fahrenheit. 

#include <stdio.h>

void main()
{
    int Cel , Fahrenheit ;

    printf("The celsius : ");
    scanf("%d",&Cel);

    Fahrenheit= Cel *9/5 + 32;

    printf(" The temp from cel to F : %d ",Fahrenheit);

}