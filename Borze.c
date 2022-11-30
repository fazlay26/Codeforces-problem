
#include<stdio.h>
int main(){
    char n[205];
    int i;
    fgets(n,sizeof(n),stdin);
    for(i=0;n[i]!='\0';i++){
        if(n[i]=="." ){
                printf("0");
        }
        else if(n[i]=="-" && n[i+1]=="."){
            printf("1");
        }
        else if(n[i]=="-" && n[i+1]=="-"){
             printf("2");
        }
    }

    return 0;
}
