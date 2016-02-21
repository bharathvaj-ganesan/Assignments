#include<stdio.h>
int inArray(int [],int );
int main()
{
    int *arr,size,search_element,i,index;
    printf("Enter the array size");
    scanf("%d",&size);
    size++;
    arr=(int *)malloc((size-1)*sizeof(int));
    printf("\n Array :");
    for(i=0;i<size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[size]=-000000000;
    printf("\n Number :");
    scanf("%d",&search_element);
    index=inArray(arr,search_element);
    printf("\n index : %d",index);
    return 0;
}
int inArray(int arr[],int search_element)
{
    int i=0;
    while(arr[i]!= -000000000)
    {
        if(search_element==arr[i])
        {
            return i;
        }
        i++;
    }
    return -1;
}
