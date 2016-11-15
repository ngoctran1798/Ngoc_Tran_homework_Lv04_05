#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("nhap n vao:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    printf("a[%d]= ",i);
    scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    printf("%4d",a[i]);
}

