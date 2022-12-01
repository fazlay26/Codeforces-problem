
#include<stdio.h>
int main(){
    int n,i,a,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a==1 || a==2){
            printf("%d \n",b);
        }
        else{
            int count=(a-1)/2;
            printf("%d \n",count);
        }
    }

    return 0;
}
