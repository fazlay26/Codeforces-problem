
#include<stdio.h>
int main()
{
    int n,i,x=0;

    char str[10];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",str);
        if(str[1]=='+'){
            x++;
        }
        else if(str[1]=='-'){
            x--;
        }

    }
    printf("%d",x);



    return 0;
}
