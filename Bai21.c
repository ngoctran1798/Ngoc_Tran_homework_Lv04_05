#include <stdio.h>
void main()
{
    int i,n,u;
    printf("nhap n=");
    scanf("%d",&n);
    u=0;
    for (i=1;i<=n;i++)
        if (i%2==0) u++;
        printf(" n co %d so chan  ",u);

}

