#include<stdio.h>
int main()
{
    int a,b,sum,sub;
    float c,d,S,D;
scanf("%d%d",&a,&b);
scanf("%f%f",&c,&d);
sum=a+b;
sub=a-b;
S=c+d;
D=c-d;
    printf("%d %d\n", sum ,sub);
    printf("%0.1f %0.1f", S , D);
    return 0;
}
