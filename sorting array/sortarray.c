#include <stdio.h>
#include <stdlib.h>


void sortarray(int *arr, int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
               *(arr+j)=temp;
            }
        }
    }
    printf("Sorted array is : ");
    for(int i=0;i<n;i++ )
    {
        printf("%d  ", *(arr+i));
    }
}
int main()
{
    int *arr,n;
    printf("Total of the numbers to be sorted: \n");
    scanf("%d",&n);

    arr=(int *)malloc(n*sizeof(int));

    printf("Enter the array of Numbers: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    sortingarray( arr,n);
    return 0;
}