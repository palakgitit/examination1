//  c program to read roll no , name , marks of three subject , calculate total , percentage , division  and give grade .


#include <stdio.h>

void main ()
{
    int name , rollN, sub1 ,sub2 ,sub3,total,division,per ;

    printf("The Name : ");
    scanf ("%s",&name);

    printf("The roll number  : ");
    scanf ("%d",&rollN);

    printf("The  math : ");
    scanf ("%d",&sub1);

    printf("The eng : ");
    scanf ("%d",&sub2);

    printf("The hindi: ");
    scanf ("%d",&sub3);

    total = sub1 + sub2 + sub3;
    per= total / 3; 
    division= total / 300;

    printf(" The total : %d\n",total);
    printf("\n");
    printf(" The per  : %d\n",per);
    printf("\n");
    printf(" The division  : %d\n",division);
    printf("\n");

    if (sub1<=100 && sub2>=100 && sub3>=100)
    {
       
    }
    else {
        printf("\n invalid choice , enter number below 100 \n ");
        printf("\n");

    }

    if (sub1>=35 && sub2>=35 && sub3>=35)
        {
            if (per>=70)
            {
                printf(" Grade A \n ");
            }
            else if (per>=50)
            {
                printf("Grade B \n ");
            }
            else{
                printf("pass class \n ");
            }
        }
        else 
        {
            printf("\n failed , Need examination \n");
        }



   
    


}