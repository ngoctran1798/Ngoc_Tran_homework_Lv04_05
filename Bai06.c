#include <stdio.h>
#include <math.h>
void main ()
{
    int a[100],i,*p,n,j,s;
    p=a;
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
    printf("chan\n");
for (i=0;i<n;i++)
        if (*(p+i)%2==0) printf("%3d",*(p+i));
        printf("\n");
     printf("le\n");
     for (i=0;i<n;i++)
        if (*(p+i)%2!=0) printf("%3d",*(p+i));
printf("\n");
}

