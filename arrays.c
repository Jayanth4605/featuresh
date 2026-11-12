#include <stdio.h>
int main()
{

   int a[10],n,i;
   printf("enter the number of elements:-");
   scanf("%d",&n);
   printf("enter n%d elements:-\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
    printf("\n elements in the array are:-\n");
    for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
        return 0;
    }
