
#include<stdio.h>
int main(){
    int year,ones,tens,hun,th;
    scanf("%d",&year);
    while(year){
            year++;
        ones=year%10;
        tens=(year/10)%10;
        hun=(year/100)%10;
        th=year/1000;
        if(ones !=tens && ones != hun && ones != hun && ones !=th && tens != hun && tens != th && hun != th){
            break;
        }

    }
    printf("%d",year);
    return 0;
}
