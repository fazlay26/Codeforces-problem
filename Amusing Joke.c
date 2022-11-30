
#include<stdio.h>
#include <string.h>
int main()
{
    char a[100],b[100],c[101],d[200]="";
    int i,j,count=0;
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    strcat(a,b);
    strcat(d,a);

//sorting D array
    for(j=0; j<strlen(d)-1; j++)
    {
        for(i=0; i<strlen(d)-1; i++)
        {

            if(d[i]>d[i+1])
            {
                char temp=d[i+1];
                d[i+1]=d[i];
                d[i]=temp;

            }

        }
    }
    //sorting C array
    for(j=0; j<strlen(c)-1; j++)
    {
        for(i=0; i<strlen(c)-1; i++)
        {
            if(c[i]>c[i+1])
            {
                char temp=c[i+1];
                c[i+1]=c[i];
                c[i]=temp;

            }

        }
    }

    int value=strcmp(c,d);

        if(value==0){
           printf("YES");
        }
        else{
             printf("NO");
        }











    return 0;
}
