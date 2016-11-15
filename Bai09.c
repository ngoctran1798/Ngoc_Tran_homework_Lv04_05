#include <stdio.h>
#include <math.h>
void main ()
{
   int i,j;
   for (i=1;i<=9;i++)
   {
       for (j=2;j<=9;j++)
        if (i*j>9) printf("%d x %d = %d   ",j,i,i*j);
         else printf("%d x %d = %d    ",j,i,i*j);
       printf("\n");


   }
   for (i=2;i<=9;i++) printf("%d x 10= %d   ",i,i*10);

}

