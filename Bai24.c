#include <stdio.h>
void main ()
{
    int a[100],i,n,*p;
    p=a;
    printf("nhap n = ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%5d",(p+i));
     for (i=0;i<n;i++)
        printf("%5d",*(p+i));
    printf("\n");

}

