#include <stdio.h>
void main()
{
    int i,n,k;
    printf("nhap n,k=");
    scanf("%d%d",&n,&k);
    printf("so chia het cho k la:");
    for (i=0;i<=n;i++)
        if (i%k==0)
        printf("%6d",i);
    printf("\n");

}

