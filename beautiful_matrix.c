
#include<stdio.h>
int main(){
    int a[5][5];
    int i,j,x,y,ans=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        scanf("%d",&a[i][j]);
        if(a[i][j]==1){
            x=i;
            y=j;
        }
    }
    }
    if(x>2){
       ans=ans+(x-2);
    }
    else{
        ans=ans+(2-x);
    }
    if(y>2){
       ans=ans+(y-2);
    }
    else{
        ans=ans+(2-y);
    }
    printf("%d",ans);

    return 0;
}
