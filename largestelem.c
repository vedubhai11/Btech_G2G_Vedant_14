#include<stdio.h>
int main()
{
    int n,i;
    float arr[100];
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements %d:",i+1);
        scanf("%f",&arr[i]);
    }
    float max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("The largest elementin the array is:%.2f",max);
    return 0;
}
