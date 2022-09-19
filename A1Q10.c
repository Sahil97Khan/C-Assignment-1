
//WAP to print “\n” on the screen.
#include<stdio.h>
#include<conio.h>
main()
{
    int d,m,y;
    printf("Enter the Date,Month and Year");
     printf("\n(Format DD/MM/YEAR)");
     scanf("%d%d%d",&d,&m,&y);

     printf("\nDate-%d,Month-%d,Year-%d",d,m,y);
    getch();
}
