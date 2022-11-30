#include<stdio.h>
int main(){
    long long int n,k,i,d,s,t;
    scanf("%lld %lld",&n,&k);

    if(n%2 !=0){
        d=(n/2)+1;
        if(k<=d){
            s=2*k-1;
        }
        else{
             t=k-d;
            s=2*t;
        }

    }
    else{
        d=n/2;
        if(k<=d){
            s=2*k-1;
        }
        else{
            t=k-d;
            s=2*t;
        }
    }
    printf("%lld",s);

return 0;
}
