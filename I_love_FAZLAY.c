
#include<stdio.h>
int main()
{
    int n,i,count=0;
    int arr[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            count++;
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            count++;
            min=arr[i];
        }
    }
    printf("%d",count);

    return 0;

}
