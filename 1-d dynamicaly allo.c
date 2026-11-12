#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *arr,i,n;
    printf("enter the no of elements:-");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
        printf("memory allocation failed");
    else
    {
        printf("enter the array elemets");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("the array elements are:-");
        for(i=0;i<n;i++)
            printf("%d",&arr[i]);
        free(arr);
    }
}
