#include <stdio.h>
void main ()
{
   int i,min,max,n,a[100];
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {    printf("a[%d]= ",i);
         scanf ("%d",&a[i]);
    }
    min=a[0];max=a[0];
     for (i=0;i<n;i++)
        printf("%4d",a[i]);
       for (i=0;i<n;i++)
    {
        if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];

    }
    printf("\n min=%d",min);
    printf("\n max=%d",max);
}

