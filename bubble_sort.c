
#include<stdio.h>
int main()
{
    int arr[8]= {12,7,9,3,15,2,6,5};
    int temp=0;
    int i,j;
    for(j=0; j<8; j++)
    {
        for(i=0; i<8; i++)
        {

            if(arr[i]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }


        }


    }
    for(i=0; i<8; i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}
