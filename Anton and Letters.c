
#include<stdio.h>
int main(){
    char str[1005];
    int count=0,i,j;
    fgets(&str,sizeof(str),stdin);

    for(i=0;i<strlen(str)-1;i++){
        for(j=0;j<strlen(str)-1;j++){
            if(str[j]>str[j+1]){
                char temp=str[j+1];
                str[j+1]=str[j];
                str[j]=temp;
            }
        }
    }
    for(i=0;i<strlen(str)-1;i++){
        if(str[i]==' ' || str[i]=='{' || str[i]=='}' || str[i]==','){
            continue;
        }
        else{
                if(str[i]!=str[i+1]){
                    count++;
        }
                }

    }
    printf("%d",count-1);

    return 0;
}
