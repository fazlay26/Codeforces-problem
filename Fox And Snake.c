#include<stdio.h>
int main(){

    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++){
        for(j=0;j<b;j++){
                if(i%2==0){
                    if(i%4==0){
                        if(j==0){
                            printf("#");
                        }
                        else{
                            printf(".");
                        }
                    }
                    else{
                            if(j==b-1){
                            printf("#");
                        }
                        else{
                            printf(".");
                        }

                    }



                }
                else{
                     printf("#");
                }

        }
        printf("\n");
    }

    return 0;
}
