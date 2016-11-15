#include <stdio.h>
#include <math.h>
void main ()
{
    int a,b,c,X;
    printf("nhap 2 so a,b =");
    scanf ("%d%d",&a,&b);
    X=a*b;
     while (c!=0)
    {
        c=a%b;
        a=b;
        b=c;

     }
     printf("UCLN=%d\n",a);
     printf("BCNN=%d",X/a);
}

