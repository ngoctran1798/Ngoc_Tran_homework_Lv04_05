#include <stdio.h>
#include <math.h>
void main ()
{
    int a[100],i,*p,n,j,s;
    p=a;
    scanf("%d",&n);
    for (i=0;i<n;i++)
         scanf ("%d",(p+i));
     for (i=0;i<n;i++)
       s=0;
       for (i=0;i<n;i++) s+=*(p+i);
        printf("tong = %d   ",s);
}
