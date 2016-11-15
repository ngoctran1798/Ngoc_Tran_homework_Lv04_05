#include <stdio.h>
void main()
{
    int max,min,i,n;
    printf("nhap n:");
    scanf("%d",&n);
   int a[n];
    for (i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    max=a[0]; min=a[0];
      for (i=0;i<n;i++)
    {
    if (max<a[i]) max=a[i];
    if (min>a[i]) min=a[i];
    }
    printf("\n min= %d", min);
    printf("\n max= %d", max);


}

