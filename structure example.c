
#include<stdio.h>
#include<math.h>
struct pointer{
    int x,y;
};

double difference(struct pointer p1,struct pointer p2){
    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));

}
int main(){

    struct pointer p1,p2;
    scanf("%d %d",&p1.x,&p1.y);
    scanf("%d %d",&p2.x,&p2.y);

    printf("%lf",difference(p1,p2));
    return 0;
}
