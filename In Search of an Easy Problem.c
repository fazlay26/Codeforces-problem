
#include<stdio.h>
int main(){

    int n,i,flag=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==1){
            flag++;

        }
    }
    if(flag==0){
        printf("EASY");
    }
    else{
        printf("HARD");
    }


    return 0;
}
