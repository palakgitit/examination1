#include <stdio.h>

void main ()
{
    int n , sum=0 , i=0;

    printf(" The number : ");
    scanf("%d",&n);

    do {
        if(i%2==0)
        {
        sum=sum+i;
        }
      i++;

    }

    while (i<=n);
    
        printf(" sum of all the n :%d ",sum);
    
}