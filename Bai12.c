#include <stdio.h>
void main ()
{
   int i,min,max,n,a[100],j,t;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {    printf("a[%d]= ",i);
         scanf ("%d",&a[i]);
    }
    min=a[0];max=a[0];
    for (i=0;i<n-1;i++)
         for (j=i+1;j<n;j++)
         {
             if (a[i]> a[j])
             {
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
         }
    for (i=0;i<n;i++)
        printf("%d   ",a[i]);
printf("\n");
}

