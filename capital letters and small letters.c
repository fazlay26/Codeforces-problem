
#include<stdio.h>
int main(){
    char name[100];
    int i;
    fgets(name,sizeof(name),stdin);
    for(i=0;name[i]!='\0';i++){
            if(name[i]>='a' && name[i]<='z'){
                name[i]=name[i]-32;
            }

    }
    printf("%s",name);
    return 0;
}
