
#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }

   long long int count=arr[0]-1;
    for(int i=0;i<m-1;i++){
        if(arr[i]>arr[i+1]){
            count=count+n-(arr[i]-arr[i+1]);
        }
        else if(arr[i]<arr[i+1]){
            count=count+arr[i+1]-arr[i];
        }
    }
    printf("%lld",count);

    return 0;
}
